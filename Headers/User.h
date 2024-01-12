#ifndef USER_H
#define USER_H

#include "Person.h"
#include <string>

class User : public Person {
public:
    User(int id, const std::string& name, const std::string& username, const std::string& password);
    
    // Additional Getter and Setter functions for User-specific attributes
    std::string getUsername() const;
    std::string getPassword() const;
    void setUsername(const std::string& newUsername);
    void setPassword(const std::string& newPassword);

private:
    std::string username;
    std::string password;
};

#endif // USER_H
