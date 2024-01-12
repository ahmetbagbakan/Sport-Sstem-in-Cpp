#ifndef DATABASE_H
#define DATABASE_H

#include "Team.h"
#include "Player.h"
#include "Match.h"
#include <vector>

class Database {
    // Database-specific functions for managing sports data
public:
    // Functions to manage teams, players, and matches
    void addTeam(const Team& team);
    void addPlayer(const Player& player);
    void addMatch(const Match& match);

    // Functions to retrieve data
    Team getTeam(int teamId);
    Player getPlayer(int playerId);
    Match getMatch(int matchId);

private:
    std::vector<Team> teams;
    std::vector<Player> players;
    std::vector<Match> matches;
};

#endif // DATABASE_H
