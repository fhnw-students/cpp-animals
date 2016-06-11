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
	cout << this->name << " is " << this->height << " cms tall and  " << this->weight << " kgs in weight" << endl;
}

bool Animal::compareTo(Animal& animal){
	Animal* ap = &animal;
	return this->age == ap->getAge();
}

bool Animal::compareTo(Animal* ap){
	return this->age == ap->getAge();
}