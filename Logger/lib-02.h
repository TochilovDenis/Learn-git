// lib-02.h
#pragma once
#include "logger.h"

class Lib02 {
public:
    void Print(Logger& logger);
};

void Lib02::Print(Logger& logger) {
    cout << "Lib02 using Logger address: " << &logger << endl;
}

