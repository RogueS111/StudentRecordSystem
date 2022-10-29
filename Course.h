//
// Created by Rogue on 5/26/2022.
//
#include <string>

#ifndef STUDENTRECORDSYSTEM_COURSE_H
#define STUDENTRECORDSYSTEM_COURSE_H


class Course {
private:
    std::string code;
    std::string title;
    double grade;
    uint8_t creditHour;

public:
    Course *next = nullptr;
    void setAll(std::string code, std::string title, double grade, uint8_t creditHour);

    std::string getCode() const;
    std::string getTitle() const;
    double getGrade() const;
    uint8_t getCreditHour() const;

    Course operator<<(const Course& c);
};


#endif //STUDENTRECORDSYSTEM_COURSE_H
