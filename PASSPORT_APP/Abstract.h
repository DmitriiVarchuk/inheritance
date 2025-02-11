#ifndef ABSTRACT_H
#define ABSTRACT_H

#include "Info.h"

class AbstractPassport {
protected:
    Info info;

public:
    AbstractPassport(const Info& info) : info(info) {}
    virtual ~AbstractPassport() = default;
    virtual void displayInfo() const = 0; // Чисто виртуальная функция
};

#endif // ABSTRACT_H
