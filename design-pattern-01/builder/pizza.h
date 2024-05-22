#pragma once
#include <iostream>
using namespace std;

class Pizza {
	string dough;
    string topping;
public:
    Pizza(const string& typeOfDough, const string& typeOfTopping)
        : dough(typeOfDough), topping(typeOfTopping) {}
    void Display() const {
        cout << "Pizza with " << dough << " and " << topping << ".\n";
    }
};
