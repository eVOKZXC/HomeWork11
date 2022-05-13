#pragma once
#ifndef Header
#define Header

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


class Vehicle {
protected:
	bool engine;
	int wheels_counter;
	int maxSpeed;
	int places_counter;
public:
	Vehicle();
	Vehicle(bool engine, int wheels_counter, int maxSpeed, int places_counter);
	virtual void isDrive() = 0;
};

class Bus : public Vehicle {
	bool isGoverment;
public:
	Bus();
	Bus(bool engine, int wheels_counter, int maxSpeed, int places_counter, bool isGoverment);
	void isDrive();
};

class Car : public Vehicle {
	string color;
public:
	Car();
	Car(bool engine, int wheels_counter, int maxSpeed, int places_counter, string color);
	void isDrive();
};

class Bycicle : public Vehicle {
	string color;
	string type;
public:
	Bycicle();
	Bycicle(bool engine, int wheels_counter, int maxSpeed, int places_counter, string color, string type);
	void isDrive();
};



#endif Header

