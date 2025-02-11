#ifndef ENTITIES_H
#define ENTITIES_H

#include "Abstract.h"

class Passport : public AbstractPassport {
public:
    Passport(const Info& info) : AbstractPassport(info) {}

    void displayInfo() const override {
        std::cout << "Name: " << info.getName() << std::endl;
        std::cout << "Surname: " << info.getSurname() << std::endl;
        std::cout << "Age: " << info.getAge() << std::endl;
        std::cout << "Identify number: " << info.getIdentifyNumber() << std::endl;
    }
    
	~Passport() override = default;
};

class ForeignPassport : public Passport {
private:
    std::string visa;
    std::size_t foreignPassportNumber;

public:
    ForeignPassport(const Info& info, const std::string& visa, std::size_t foreignPassportNumber)
        : Passport(info), visa(visa), foreignPassportNumber(foreignPassportNumber) {}

    void displayInfo() const override {
        Passport::displayInfo();
        std::cout << "Visa: " << visa << std::endl;
        std::cout << "Foreign Passport Number: " << foreignPassportNumber << std::endl;
    }

	~ForeignPassport() override = default;

};

#endif // ENTITIES_H
