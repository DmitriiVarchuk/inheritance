#ifndef ABSTRACT_H
#define ABSTRACT_H

#include "Info.h"

class AbstractStudent {
public:
    Info info;
    std::string university;
    int year_at_university;

    virtual void displayInfo() const = 0;

    virtual ~AbstractStudent() {
        std::cout << "AbstractStudent object is being deleted" << std::endl;
    }
};

class AbstractProfessor {
public:
    Info info;
    std::string university;
    std::string department;
    std::string position;
    std::string research;

    virtual void displayInfo() const = 0;

    virtual ~AbstractProfessor() {
        std::cout << "AbstractProfessor object is being deleted" << std::endl;
    }
};

#endif // ABSTRACT_H
