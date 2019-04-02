#include <iostream>
#include "car.h" 

int car::mpg(int carType) 
{ 
carType *= 10; 
} ; 

void car::carType() { 
	std::cout << "This is a car"; 
} 
electric::electric(int amps) { } 
electric::~electric() { } 
int electric::Twatts() { 
	return watts; 
} 
int electric::Twatts(const int&) { 
	return watts; 
} 

void electric::yell() {
	std::cout << "This is an Electric CAR!!!"; 
	 } 
int electric::volts(int ) { 
	std::cout << "This is a 120 volt car"; 
} 

