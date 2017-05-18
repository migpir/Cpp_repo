//============================================================================
// Name        : proj3.cpp
// Author      : Miguel H. Peralta
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class Fruit{

};

struct bits {

	short int byte;
};

short int byte = 0;

int main() {

	byte = 1;
	std::cout << "Byte = "<< byte << endl; // prints the value of byte

	byte=2;
	std::cout << "Byte = "<< byte << endl; // prints the value of byte

	byte =~ 0x2;
	std::cout << "Byte = "<< byte << endl; // prints the value of byte

	byte =! 0x3;
	std::cout << "Byte = "<< byte << endl; // prints the value of byte

	byte =! 0x4;
	std::cout << "Byte = "<< byte << endl; // prints the value of byte

	byte =~ 0x5;
	std::cout << "Byte = "<< byte << endl; // prints the value of byte

	byte =! 0x6;
	std::cout << "Byte = "<< byte << endl; // prints the value of byte

	byte =! 0x7;
	std::cout << "Byte = "<< byte << endl; // prints the value of byte

	return 0;
}
