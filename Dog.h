#include <iostream>
#include <vector>
#include <string>
#include <fstream>

#include "Animal.h"

using namespace std;

class Dog: public Animal {
	private:

	public:
		void getClass(){
			cout << "I'm a Dog" << endl;
		}
		void makeSound(){
			cout << "The Dog says wuff" << endl;
		}
};