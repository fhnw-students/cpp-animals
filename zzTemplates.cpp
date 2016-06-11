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

// void output(int i){ cout << i << endl; }
// void output(float f){ cout << f << endl; }
// void output(char c){ cout << c << endl; }
// void output(const char* word){ cout << word << endl; }

template <class T>
void output(const T & n){
 cout << n << endl;
}

int main() {

	output(1);
	output(2.34);
	output('a');
	output("wurst");
	// everything went successful
	return 0;
}
