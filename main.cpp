//
// Created by hirsch on 22/04/16.
//

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

// #include "Animal.h"
#include "Dog.h"
#include "Cat.h"

using namespace std;

// void whatClassAreYou(Animal *ap){
// 	ap->getClass();
// }

int main() {

	// Animal a1(35, 13, 2, "tom");
	// Animal a2(23, 54, 3, "balou");
	// Animal a3(45, 23, 4, "max");
	// Animal a4(12, 34, 6, "timon");
	// Animal a5(55, 14, 1, "pumba");

	Animal animals[5];
	animals[0] = Animal(35, 13, 2, "tom");
	animals[1] = Animal(23, 54, 3, "balou");
	animals[2] = Animal(45, 23, 4, "max");
	animals[3] = Animal(12, 34, 6, "timon");
	animals[4] = Animal(55, 14, 6, "pumba");

	Animal *ap = animals;
	cout << "We have this num of animals " << sizeof(animals) << endl;
	for (size_t i = 0; i < 5; i++){
		ap->toString();
		ap++;
	}

	// everything went successful
	return 0;
}