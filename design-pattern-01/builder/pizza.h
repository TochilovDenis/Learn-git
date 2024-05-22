#pragma once
#include <iostream>
using namespace std;

class Pizza {
	string dough;
    	string topping;
    	string sauce;
public:
    	Pizza() {}
    	~Pizza() {}

    	void TypeOfDough(string value) { dough = value; }
    	void TypeOfToppings(string value) { topping = value; }
    	void TypeOfSauce(string value) { sauce = value; }
	void Display() const {
        	cout << "Pizza with " << dough << " and " << topping << " and " << sauce << ".\n";
	}
};

class PizzaBuilder {
    	Pizza pizza;
public:
    	Pizza build() { return pizza; }
    	PizzaBuilder& SetTypeOfDough(string value)   { pizza.TypeOfDough(value);    return *this; }
        PizzaBuilder& SetTypeOfTopping(string value) { pizza.TypeOfToppings(value); return *this; }
	PizzaBuilder& SetTypeOfSauce(string value)   { pizza.TypeOfSauce(value);    return *this; }
};
