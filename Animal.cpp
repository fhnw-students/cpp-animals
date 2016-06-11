#include <iostream>
#include <vector>
#include <string>
#include <fstream>

#include "Animal.h"

int Animal::numOfAnimals = 0;

Animal::Animal(int height, int weight, int age, string name){
	this->height = height;
	this->weight = weight;
	this->age = age;
	this->name = name;
	Animal::numOfAnimals++;
}

Animal::~Animal(){
	cout << "Animal " << this->name << " destroyed" << endl;
	Animal::numOfAnimals--;
}

Animal::Animal(){
	Animal::numOfAnimals++;
}

void Animal::toString(){
	cout << this->name << " is " << this->height << " cms tall,  " << this->weight << " kgs in weight and " <<
		this->age << " years old" << endl;
}

bool Animal::compareTo(Animal& animal){
	Animal* ap = &animal;
	return this->age == ap->getAge();
}

bool Animal::compareTo(Animal* ap){
	return this->age == ap->getAge();
}

Animal& Animal::operator++(){
	this->age++;
	return *this;
}

Animal& Animal::operator--(){
	this->age--;
	return *this;
}

Animal& Animal::operator++(int){
	this->age++;
	return *this;
}

Animal& Animal::operator--(int){
	this->age--;
	return *this;
}

bool Animal::operator==(const Animal& animal){
	return this->age == animal.age;
}