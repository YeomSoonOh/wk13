#include <iostream>
using namespace std;
#include "CarS3.h"
#include "SUVS3.h"
#include "Engineer.h"
int main(int argc, char* argv[]) {
	SUV* newSUV = new SUV();
	newSUV->setPrice(45000);
	Engineer engineer;
	std::cout << "Price is " << engineer.speed_Change(newSUV) << endl;
	std::cout << "Price is " << engineer.getCarPrice(newSUV) << "dollar\n";
	std::cout << engineer.get_Wheels(newSUV) << endl;

	delete newSUV;

	getchar();

}