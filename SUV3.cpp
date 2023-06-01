#include "SUVS3.h"
#include <iostream>
void SUV::setSparewheels(int ii) {
	spareWheels = ii;
}
int SUV::getSparewheels() {
	return spareWheels;
};
float SUV::getTotalPrice() {
	return (this->wheels * 100.0 + this->price);
}
void SUV::klaxon(int ii) {
	carBreak(1);
	gearUp(10.0);
	gearDown(10.0);
	for (int i = 0; i < ii; i++) {
		std::cout << "Beep\n";
	}
}