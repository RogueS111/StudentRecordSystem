//
// Created by Rogue on 5/26/2022.
//

#include <iostream>
#include "Person.h"

void Person::setName(std::string name){
    Person::name = name;
}

std::string Person::getName() const {
    return name;
}

void Person::setAge(uint8_t age){
    Person::age = age;
}

uint8_t Person::getAge() const {
    return age;
}

Person operator<<(const Person& p) {
    Person person;
    std::cout<<"Code: "<<person.getName()<<std::endl;
    return course;
}