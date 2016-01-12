//Andrew Niklas
//Homework 1
//Completed 

#include <iostream>
#include <cmath>

int main(){
	int age;
	int ageSquared;
	int ageHalved;

	std::cout << "Please enter your age" << std::endl;
	std::cin >> age;
	while(age < 0){
		std::cout << "Invalid Input! Please enter your age" << 
	std::endl;
		std::cin >> age;
	}
	ageSquared = pow(age, 2);
	ageHalved = age/2;
	std::cout << "age: " << age << std::endl;
	std::cout << "ageSquared: " << ageSquared << std::endl;
	std::cout << "ageHalved: " << ageHalved << std::endl;
	std::cout << std::endl;

	std::cout << (age * ageHalved) << std::endl;
	std::cout << (ageSquared / ageHalved) << std::endl;
	std::cout << (ageSquared % ageHalved) << std::endl;
	std::cout << (age - ageHalved) << std::endl;
	std::cout << (age / ageSquared) << std::endl;
	std::cout << (ageSquared + age) << std::endl;
	std::cout << ((age + ageSquared + ageHalved) / 3.0F) << std::endl;
}
