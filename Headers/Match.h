#ifndef MATCH_H
#define MATCH_H

#include "Team.h"
#include <string>

class Match {
    // Match-specific functions and attributes
public:
    Match(int id, const Team& team1, const Team& team2, const std::string& date);
    
    // Match manipulation and information functions
    void setScore(int team1Score, int team2Score);
    std::string getMatchInfo() const;

private:
    int id;
    Team team1;
    Team team2;
    int team1Score;
    int team2Score;
    std::string date;
};

#endif // MATCH_H
