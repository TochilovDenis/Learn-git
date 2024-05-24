#include "car-pattern.h"

int main() {
	CarBuilder builder1;
    	builder1.setDoors(4).
        	setWheels(4).
        	setTrunk(true).
        	setEngineVolume(2.5).
        	setRadio(true);
    	Car car1 = builder1.build();
    	car1.DisplayInfo();

    	CarBuilder builder2;
    	builder2.setDoors(2).
        	setWheels(4).
        	setTrunk(false).
        	setEngineVolume(1.6).
        	setRadio(false);
    	Car car2 = builder2.build();
    	car2.DisplayInfo();

    	CarBuilder builder3;
    	builder3.setDoors(5).
        	setWheels(4).
        	setTrunk(true).
        	setEngineVolume(3.0).
        	setRadio(true);
    	Car car3 = builder3.build();
    	car3.DisplayInfo();

    	return 0;
}
