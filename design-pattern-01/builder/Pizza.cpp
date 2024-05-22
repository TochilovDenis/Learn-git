#include <iostream>
#include "pizza.h"

int main() {
	Pizza pizza =  PizzaBuilder().
		SetTypeOfDough("Thin").
		SetTypeOfTopping("Pineapple").
		SetTypeOfSauce("Tomato").
	       	build();

    	pizza.Display();
    	return 0;
}
