#include <iostream> 
#include "car.h" 

int main(int argc, char *arvg[]) { 

	car suv; 
	suv.carType(); 
	std::cout << suv.mpg(10); 
	electric Ecar(25); 
	std::cout << Ecar.amps; 
	std::cout << Ecar.Twatts(); 
	return 0; 

} 

