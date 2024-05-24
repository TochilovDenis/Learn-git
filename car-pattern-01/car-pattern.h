#pragma once
#include <iostream>
using namespace std;

class Car {
    	int doors;
    	int wheels;
    	bool trunk;
    	double engineVolume;
    	bool radio;
public:
    	Car() : doors(0), wheels(0), trunk(false), engineVolume(0.0), radio(false) {}
    	~Car() {}

    	void setDoors(int doors)                  { this->doors = doors; }
    	void setWheels(int wheels)                { this->wheels = wheels; }
    	void setTrunk(bool trunk)                 { this->trunk = trunk; }
    	void setEngineVolume(double engineVolume) { this->engineVolume = engineVolume; }
    	void setRadio(bool radio)                { this->radio = radio; }

    	void DisplayInfo() const {
        	cout << "Car Info:\n"
            	<< "Doors: " << doors << "\n"
            	<< "Wheels: " << wheels << "\n"
            	<< "Trunk: " << (trunk ? "Yes" : "No") << "\n"
            	<< "Engine Volume: " << engineVolume << "\n"
            	<< "Radio: " << (radio ? "Yes" : "No") << "\n\n";
    	}
};

class CarBuilder {
public:
    	Car* car;
    	CarBuilder() : car(new Car()) {}
    	~CarBuilder() { delete car; }

    	CarBuilder& setDoors(int doors) {
        	car->setDoors(doors);
        	return *this;
   	}
    	CarBuilder& setWheels(int wheels) {
        	car->setWheels(wheels);
       		return *this;
   	}
    	CarBuilder& setTrunk(bool trunk) {
        	car->setTrunk(trunk);
        	return *this;
    	}
    	CarBuilder& setEngineVolume(double engineVolume) {
        	car->setEngineVolume(engineVolume);
        	return *this;
    	}
    	CarBuilder& setRadio(bool radio) {
        	car->setRadio(radio);
        	return *this;
   	}
    	Car build() {
        	return *car;
    	}
};
