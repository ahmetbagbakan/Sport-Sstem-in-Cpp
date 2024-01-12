#include "Player.h"

// Constructor with parameters
Player::Player(int id, const std::string& name, const std::string& teamName, int goalsScored) 
    : Person(id, name), teamName(teamName), goalsScored(goalsScored) {
    // The initializer list initializes the Person part of this Player,
    // as well as the teamName and goalsScored fields.
}

// Getter for teamName
std::string Player::getTeamName() const {
    return teamName;
}

// Getter for goalsScored
int Player::getGoalsScored() const {
    return goalsScored;
}

// Setter for teamName
void Player::setTeamName(const std::string& newTeamName) {
    teamName = newTeamName;
}

// Setter for goalsScored
void Player::setGoalsScored(int newGoalsScored) {
    goalsScored = newGoalsScored;
}
