#include "../Headers/Person.h"

// Constructor with parameters
Person::Person(int id, const std::string& name, const std::string& password)
    : id(id), name(name), password(password) {
    // Constructor body - here we've initialized the fields directly.
}

// Virtual destructor
Person::~Person() {
    // Destructor body - if you have any dynamic memory or resources to release, do it here.
}

// Getter for ID
int Person::getId() const {
    return id;
}

// Getter for Name
std::string Person::getName() const {
    return name;
}

// Getter for Password
std::string Person::getPassword() const {
    return password;
}

// Setter for ID
void Person::setId(int newId) {
    id = newId;
}

// Setter for Name
void Person::setName(const std::string& newName) {
    name = newName;
}

// Setter for Password
void Person::setPassword(const std::string& newPassword) {
    password = newPassword;
}
