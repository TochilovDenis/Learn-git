#pragma once
#include "logger.h"

class Lib01 {
public:
    void Print(Logger& logger);
};

void Lib01::Print(Logger& logger) {
    cout << "Lib01 using Logger address: " << &logger << endl;
}
