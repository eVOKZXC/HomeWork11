#include "Header.h"


Vehicle::Vehicle() {
	engine = 0;
	maxSpeed = 0;
	wheels_counter = 0;
	places_counter = 0;
}

Vehicle::Vehicle(bool engine, int wheels_counter, int maxSpeed, int places_counter) {
	this->engine = engine;
	this->maxSpeed = maxSpeed;
	this->wheels_counter = wheels_counter;
	this->places_counter = places_counter;
}

Bus::Bus() {
	isGoverment = true;
}

Bus::Bus(bool engine, int wheels_counter, int maxSpeed, int places_counter, bool isGoverment) : Vehicle(engine, wheels_counter, maxSpeed, places_counter) {
	this->isGoverment = isGoverment;
}

void Bus::isDrive() {
	cout << "Bus is driving" << endl;
}



Car::Car() {
	color = "Uknown";
}

Car::Car(bool engine, int wheels_counter, int maxSpeed, int places_counter, string color) : Vehicle(engine, wheels_counter, maxSpeed, places_counter) {
	this->color = color;
}

void Car::isDrive() {
	cout << "Car is driving" << endl;
}


Bycicle::Bycicle() {
	color = "Uknown";
	type = "Type";
}

Bycicle::Bycicle(bool engine, int wheels_counter, int maxSpeed, int places_counter, string color, string type) : Vehicle(engine, wheels_counter, maxSpeed, places_counter) {
	this->color = color;
	this->type = type;
}

void Bycicle::isDrive() {
	cout << "Bycicle rides" << endl;
}
