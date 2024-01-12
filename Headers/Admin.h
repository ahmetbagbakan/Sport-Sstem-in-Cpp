#ifndef ADMIN_H
#define ADMIN_H

#include "User.h"

class Admin : public User {
    // Admin-specific functions and attributes (if any)
public:
    Admin(int id, const std::string& name, const std::string& username, const std::string& password);
};

#endif // ADMIN_H
