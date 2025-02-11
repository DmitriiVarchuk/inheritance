#include <iostream>
#include "lib.h"
#include "entities.h"
#include "abstract.h"

int main() {
    Student student;
    Professor professor;
    Aspirant aspirant;

    student.displayInfo();
    std::cout << "-----------------" << std::endl;
    professor.displayInfo();
    std::cout << "-----------------" << std::endl;
    aspirant.displayInfo();
    std::cout << "-----------------" << std::endl;

    return 0;
}
