#include <iostream>
#include <vector>
#include <string>
#include <fstream>

#include "Animal.h"

using namespace std;

class Cat: public Animal {
	private:

	public:
		void getClass(){
			cout << "I'm a Cat" << endl;
		}
		void makeSound(){
			cout << "The Cat says meow" << endl;
		}
};