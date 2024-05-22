#include <iostream>
#include "pizza.h"

int main() {
    	Pizza pizza1("Thin");
    	pizza1.Display();

    	Pizza pizza2("Thick", "Mushrooms");
    	pizza2.Display();

	Pizza pizza3("Thin", "Pepperoni", "Tomato");
	pizza3.Display();

    	return 0;
}
