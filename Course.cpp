//
// Created by Rogue on 5/26/2022.
//

#include <iostream>
#include "Course.h"


void Course::setAll(std::string code, std::string title, double grade, uint8_t creditHour){
    this->code = code;
    this->title = title;
    this->grade = grade;
    this->creditHour = creditHour;
    this->next = NULL;
}


std::string Course::getCode() const {
    return code;
}


std::string Course::getTitle() const {
    return title;
}


double Course::getGrade() const {
    return grade;
}


uint8_t Course::getCreditHour() const {
    return creditHour;
}

Course operator<<(const Course& c) {
    Course course;
    std::cout<<"Code: "<<course.getCode()<<std::endl;
    return course;
}

