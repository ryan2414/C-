#include "Person.h"
#include <iostream>

int Person::num = 0;

Person::Person() {
	num++;
}

void Person::Print() {
	std::cout << num << std::endl;
}