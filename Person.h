//
// Created by Rogue on 5/26/2022.
//
#include <string>

#ifndef DATA_STRUCTURES_PROJECTS_PERSON_H
#define DATA_STRUCTURES_PROJECTS_PERSON_H


class Person {
private:
    std::string name;
    uint8_t age;
public:
    void setName(std::string name);
    std::string getName() const ;
    void setAge(uint8_t age);
    uint8_t getAge() const ;
    Person operator<<(const Person& p);
};


#endif //DATA_STRUCTURES_PROJECTS_PERSON_H
