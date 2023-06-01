#include "Engineer.h"
int Engineer::getCarPrice(Car* xx) {
	return xx->price; // access protected or private
}
int Engineer::get_Wheels(Car* xx) {
	return xx->wheels; // access protected or private
}
int Engineer::speed_Change(Car* xx) {
	return xx->speed;
}