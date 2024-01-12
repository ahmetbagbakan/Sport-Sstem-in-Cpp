#ifndef TEAM_H
#define TEAM_H

#include "Player.h"
#include <vector>
#include <string>

class Team {
    // Team-specific functions and attributes
public:
    Team(const std::string& name);
    
    // Team manipulation functions
    void addPlayer(const Player& player);
    void removePlayer(int playerId);

    // Getter functions
    std::string getName() const;
    std::vector<Player> getPlayers() const;

private:
    std::string name;
    std::vector<Player> players;
};

#endif // TEAM_H
