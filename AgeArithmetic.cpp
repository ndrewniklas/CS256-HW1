//Andrew Niklas
//Homework 1
//Completed 1-11-2016

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

	std::cout << "Multiply age by ageHalved: ";
	std::cout << (age * ageHalved) << std::endl;
	std::cout << "Divide ageSquared by ageHalved: ";
	std::cout << (ageSquared / ageHalved) << std::endl;
	std::cout << "Take the remainder of ageSquared divided by ageHalved: ";
	std::cout << (ageSquared % ageHalved) << std::endl;
	std::cout << "Subtract ageHalved from age: ";
	std::cout << (age - ageHalved) << std::endl;
	std::cout << "Divide age by ageSquared: ";
	std::cout << (age / ageSquared) << std::endl;
	std::cout << "Add ageSquared to age: ";
	std::cout << (ageSquared + age) << std::endl;
	std::cout << "Mean of age, ageSquared, and ageHalved: ";
	std::cout << ((age + ageSquared + ageHalved) / 3.0F) << std::endl;
}
