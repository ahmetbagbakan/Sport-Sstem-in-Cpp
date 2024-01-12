#ifndef PLAYER_H
#define PLAYER_H

#include "Person.h"
#include <string>

class Player : public Person {
    // Player-specific functions and attributes
public:
    Player(int id, const std::string& name, const std::string& teamName, int goalsScored);
    
    // Additional Getter and Setter functions for Player-specific attributes
    std::string getTeamName() const;
    int getGoalsScored() const;
    void setTeamName(const std::string& newTeamName);
    void setGoalsScored(int newGoalsScored);

private:
    std::string teamName;
    int goalsScored;
};

#endif // PLAYER_H
