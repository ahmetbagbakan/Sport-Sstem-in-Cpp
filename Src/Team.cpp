#include "Team.h"

// Constructor with team name
Team::Team(const std::string& name) : name(name) {
    // The constructor initializes the team name. The player list is initially empty.
}

// Add a player to the team
void Team::addPlayer(const Player& player) {
    players.push_back(player);
}

// Remove a player from the team by their ID
void Team::removePlayer(int playerId) {
    // Iterates through the vector to find and remove the player with the given ID
    for (auto it = players.begin(); it != players.end(); ++it) {
        if (it->getId() == playerId) {
            players.erase(it);
            return; // Exit the function once the player is removed
        }
    }
}

// Getter for team name
std::string Team::getName() const {
    return name;
}

// Getter for the list of players
std::vector<Player> Team::getPlayers() const {
    return players;
}
