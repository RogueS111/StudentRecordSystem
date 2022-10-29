#include <iostream>
#include "Course.h"
#include "Student.h"

int main() {
    Course course;
    course.setAll("COP3530", "Data Structures & Algorithms", 90, 3);
    course.addCourse(course);
}
