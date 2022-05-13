#include "Header.h"

int main() {
	Car car(1, 4, 120, 5, "red");
	Bus bus(1, 4, 60, 90, 1);
	Bycicle bycicle(0, 2, 20, 1, "red", "BMX");
	
	car.isDrive();
	bus.isDrive();
	bycicle.isDrive();

}