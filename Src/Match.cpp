#include "Match.h"

// Constructor with parameters
Match::Match(int id, const Team& team1, const Team& team2, const std::string& date)
    : id(id), team1(team1), team2(team2), team1Score(0), team2Score(0), date(date) {
    // The initializer list initializes the match with IDs, teams, and date.
    // Initial scores are set to 0.
}

// Method to set the score of the match
void Match::setScore(int team1Score, int team2Score) {
    this->team1Score = team1Score;
    this->team2Score = team2Score;
}

// Method to get a string with the match information
std::string Match::getMatchInfo() const {
    return "Match ID: " + std::to_string(id) + "\n" +
           "Date: " + date + "\n" +
           "Team 1: " + team1.getName() + " - Score: " + std::to_string(team1Score) + "\n" +
           "Team 2: " + team2.getName() + " - Score: " + std::to_string(team2Score);
}
