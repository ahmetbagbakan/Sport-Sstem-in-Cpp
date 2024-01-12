#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
public:
    Person(int id, const std::string& name);
    virtual ~Person() = default;

    // Getter functions
    int getId() const;
    std::string getName() const;

    // Setter functions
    void setId(int newId);
    void setName(const std::string& newName);

protected:
    int id;
    std::string name;
};

#endif // PERSON_H
