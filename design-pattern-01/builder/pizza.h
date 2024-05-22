#pragma once
#include <iostream>
using namespace std;

class Pizza {
	string dough;
   	string topping;
	string sauce;
public:
	Pizza(const string& typeOfDough, const string& typeOfTopping, const string& typeOfSauce) : dough(typeOfDough), topping(typeOfTopping), sauce(typeOfSauce) {}

	void Topping(string value) { topping = value; }
	string Topping() { return topping; }
	void Dough(string value) { dough = value; }
	string TypeOfDough() { return dough; }
	void Sauce(string value) { sauce = value; }
	string Sauce() { return sauce; }
	
	void Display() const {
		cout << "Pizza with " << dough << " and " << topping <<" and " << sauce << ".\n"; 
	}
};
