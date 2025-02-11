#include <iostream>
#include "lib.h"
#include "Entities.h"
#include "Abstract.h"

int main() {
    Info info("Maris", "Shardyko", 15, 123456789);
    Passport passport(info);
    passport.displayInfo();

    Info foreignInfo("Maris", "Shardyko", 15, 123456789);
    ForeignPassport foreignPassport(foreignInfo, "Tourist", 987654321);
    foreignPassport.displayInfo();

    return 0;
}
