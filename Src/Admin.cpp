#include "Admin.h"

// Constructor with parameters
Admin::Admin(int id, const std::string& name, const std::string& username, const std::string& password) 
    : User(id, name, username, password) {
    // Constructor body (if needed)
    // Since the constructor is just forwarding parameters to the User constructor,
    // there might not be any additional initialization needed here.
}

// You might add additional methods specific to Admin here.
// For example, functions related to administrative tasks like managing users, etc.

// Example of an additional method (if needed):
// void Admin::manageUsers() {
//     // Code for managing users
// }
