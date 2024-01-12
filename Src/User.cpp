#include "User.h"

// Constructor with parameters
User::User(int id, const std::string& name, const std::string& username, const std::string& password) 
    : Person(id, name), username(username), password(password) {
    // The initializer list initializes the Person part of this User,
    // as well as the username and password fields.
}

// Getter for username
std::string User::getUsername() const {
    return username;
}

// Getter for password
std::string User::getPassword() const {
    return password;
}

// Setter for username
void User::setUsername(const std::string& newUsername) {
    username = newUsername;
}

// Setter for password
void User::setPassword(const std::string& newPassword) {
    password = newPassword;
}
