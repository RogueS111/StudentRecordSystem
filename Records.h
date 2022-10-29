//
// Created by Rogue on 5/26/2022.
//

#ifndef STUDENTRECORDSYSTEM_RECORDS_H
#define STUDENTRECORDSYSTEM_RECORDS_H


#include <cstdint>
#include "Student.h"

class Records {
private:
    uint32_t numberOfStudents;
    double averageGpa;
public:

    uint32_t getNumberOfStudents() const;
    void setNumberOfStudents(uint32_t numberOfStudents);
    double getAverageGpa() const;
    void setAverageGpa(double averageGpa);

};


#endif //STUDENTRECORDSYSTEM_RECORDS_H
