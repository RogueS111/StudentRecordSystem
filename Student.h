//
// Created by Rogue on 5/26/2022.
//

#ifndef STUDENTRECORDSYSTEM_STUDENT_H
#define STUDENTRECORDSYSTEM_STUDENT_H


#include "Person.h"
#include "Course.h"

class Student: Person {
private:
    uint32_t totalCreditHours;
    uint32_t numberOfCourses;
    uint32_t uid;
    double gpa;
public:
    Course *head = nullptr;
    Course *next = nullptr;
    Course *prev = nullptr;

    void addCourse(Course course);
    void deleteCourse(Course course);

    uint32_t getTotalCreditHours() const;
    void setTotalCreditHours(uint32_t totalCreditHours);
    uint32_t getNumberOfCourses() const;
    void setNumberOfCourses(uint32_t numberOfCourses);
    uint32_t getUid() const;
    void setUid(uint32_t uid);
    double getGpa() const;
    void setGpa(double gpa);
};


#endif //STUDENTRECORDSYSTEM_STUDENT_H
