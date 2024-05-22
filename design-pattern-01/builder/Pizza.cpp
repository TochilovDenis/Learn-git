#include <iostream>
#include "pizza.h"

int main() {
	PizzaBuilder builder;

    	builder.SetTypeOfDough("Thin");
    	builder.SetTypeOfTopping("Pineapple");
    	builder.SetTypeOfSauce("Tomato");

    	Pizza pizza = builder.build();
    	pizza.Display();
    	return 0;
}
