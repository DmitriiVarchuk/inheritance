#ifndef INFO_H
#define INFO_H

#include <string>

class Info {
public:
    std::string name;
    std::string surname;
    std::size_t age;

    Info(const std::string& name, const std::string& surname, std::size_t age, std::size_t identify_number)
        : name(name), surname(surname), age(age), identify_number(identify_number) {}

    std::size_t getIdentifyNumber() const {
        return identify_number;
    }

    void setIdentifyNumber(std::size_t number) {
        identify_number = number;
    }

    std::string getName() const {
        return name;
    }

    std::string getSurname() const {
        return surname;
    }

    std::size_t getAge() const {
        return age;
    }

protected:
    std::size_t identify_number;
};

#endif // INFO_H
