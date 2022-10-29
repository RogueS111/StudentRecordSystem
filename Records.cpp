//
// Created by Rogue on 5/26/2022.
//

#include "Records.h"

uint32_t Records::getNumberOfStudents() const {
    return numberOfStudents;
}

void Records::setNumberOfStudents(uint32_t numberOfStudents) {
    Records::numberOfStudents = numberOfStudents;
}

double Records::getAverageGpa() const {
    return averageGpa;
}

void Records::setAverageGpa(double averageGpa) {
    Records::averageGpa = averageGpa;
}
