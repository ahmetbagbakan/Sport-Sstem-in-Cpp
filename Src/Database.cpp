#include "Database.h"

// Define the static members
std::vector<Team> Database::teams;
std::vector<Player> Database::players;
std::vector<Match> Database::matches;

// Add a Team
void Database::addTeam(const Team& team) {
    teams.push_back(team);
}

// Add a Player
void Database::addPlayer(const Player& player) {
    players.push_back(player);
}

// Add a Match
void Database::addMatch(const Match& match) {
    matches.push_back(match);
}

// Retrieve a Team by ID
Team Database::getTeam(int teamId) {
    for (const auto& team : teams) {
        if (team.getId() == teamId) {
            return team;
        }
    }
    throw std::runtime_error("Team not found");
}

// Retrieve a Player by ID
Player Database::getPlayer(int playerId) {
    for (const auto& player : players) {
        if (player.getId() == playerId) {
            return player;
        }
    }
    throw std::runtime_error("Player not found");
}

// Retrieve a Match by ID
Match Database::getMatch(int matchId) {
    for (const auto& match : matches) {
        if (match.getId() == matchId) {
            return match;
        }
    }
    throw std::runtime_error("Match not found");
}
