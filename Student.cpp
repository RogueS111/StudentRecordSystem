//
// Created by Rogue on 5/26/2022.
//

#include <iostream>
#include "Student.h"

void Student::addCourse(Course course) {
    if (head ==  nullptr){
        head = new Course();
        head->setAll(course.getCode(), course.getTitle(), course.getGrade(), course.getCreditHour());
    }
    else{
        Course *ptr = new Course();
        ptr = head;
        while(ptr->next != nullptr){
            ptr = ptr->next;
        }
        ptr->next = new Course();
        ptr->next->setAll(course.getCode(), course.getTitle(), course.getGrade(), course.getCreditHour());
    }
}


void Student::deleteCourse(Course course) {
    if (head == nullptr){
        std::cout<<"/nError, list is already empty/n"<<std::endl;
        return;
    }
    else{
        Course *ptr = new Course();
        ptr = head;
        if(ptr->next == nullptr && ptr->getCode().compare(course.getCode()) == 1){
            delete head;
            return;
        }
        while(ptr->next != nullptr){
            if(ptr->getCode().compare(course.getCode()) == 1){
                break;
            }
            ptr = ptr->next;
        }
        Course *temp = new Course();
        temp = ptr->next;
        ptr->next = ptr->next->next;
        delete temp;
    }
}


uint32_t Student::getNumberOfCourses() const {
    return numberOfCourses;
}

void Student::setNumberOfCourses(uint32_t numberOfCourses) {
    Student::numberOfCourses = numberOfCourses;
}

uint32_t Student::getTotalCreditHours() const {
    return totalCreditHours;
}

void Student::setTotalCreditHours(uint32_t totalCreditHours) {
    Student::totalCreditHours = totalCreditHours;
}

uint32_t Student::getUid() const {
    return uid;
}

void Student::setUid(uint32_t uid) {
    Student::uid = uid;
}

double Student::getGpa() const {
    return gpa;
}

void Student::setGpa(double gpa) {
    Student::gpa = gpa;
}

/*/
void Student::LinkedList(Course *head) {
    this->head = head;
}
/*/
