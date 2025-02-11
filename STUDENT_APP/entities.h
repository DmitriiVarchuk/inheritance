#ifndef ENTITIES_H
#define ENTITIES_H

#include "Abstract.h"

class Student : public AbstractStudent {
public:
    Student() {
        info.name = "John";
        info.surname = "Doe";
        info.email = "hogrider@gmail.com";
        info.phone = "+123456789";
        info.address = "123 Main Street";
        info.city = "New York";
        info.country = "USA";
        university = "Unknown University";
        year_at_university = 1;
    }

    void displayInfo() const override {
        std::cout << "Student: " << info.name << " " << info.surname << std::endl;
        std::cout << "University: " << university << std::endl;
        std::cout << "Year at University: " << year_at_university << std::endl;
    }

    ~Student() {
        std::cout << "Student object is being deleted" << std::endl;
    }
};

class Professor : public AbstractProfessor {
public:
    Professor() {
        info.name = "Jane";
        info.surname = "Smith";
        info.email = "pro@gmail.com";
        info.phone = "+123456879";
        info.address = "456 Main Street";
        info.city = "Boston";
        info.country = "USA";
        university = "MIT";
        department = "AI";
        position = "Professor";
        research = "Artificial Intelligence";
    }

    void displayInfo() const override {
        std::cout << "Professor: " << info.name << " " << info.surname << std::endl;
        std::cout << "University: " << university << std::endl;
        std::cout << "Department: " << department << std::endl;
        std::cout << "Research: " << research << std::endl;
    }

    ~Professor() {
        std::cout << "Professor object is being deleted" << std::endl;
    }
};

class Aspirant : public Student {
public:
    std::string research;
    Professor supervisor;
    int year_of_defense;
    int time_to_defense;

    Aspirant() : year_of_defense(2023), time_to_defense(2) {
        research = "Machine Learning";
    }

    void displayInfo() const override {
        std::cout << "Aspirant: " << info.name << " " << info.surname << std::endl;
        std::cout << "University: " << university << std::endl;
        std::cout << "Research: " << research << std::endl;
        std::cout << "Supervisor: " << supervisor.info.name << " " << supervisor.info.surname << std::endl;
        std::cout << "Year of Defense: " << year_of_defense << std::endl;
        std::cout << "Time to Defense: " << time_to_defense << " years" << std::endl;
    }

    ~Aspirant() {
        std::cout << "Aspirant object is being deleted" << std::endl;
    }
};

#endif // ENTITIES_H
