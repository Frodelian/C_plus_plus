//”пражнение 9

#include "std_lib_facilities.h"

int main()
{
	int number;
	std::string i1 = "zero\n";
	std::string i2 = "one\n";
	std::string i3 = "two\n";
	std::string i4 = "tree\n";
	std::string i5 = "four\n";
	std::cout << "Enter number: \n";
	std::cin >> number;
	if (number == 0) {
		std::cout << i1;
	}
	if (number == 1) {
		std::cout << i2;
	}
	if (number == 2) {
		std::cout << i3;
	}
	if (number == 3) {
		std::cout << i4;
	}
	if (number == 4) {
		std::cout << i5;
	}
	if (number != 0 && number != 1 && number != 2 && number != 3 && number != 4) {
		std::cout << "I dont know this number.\n";
	}
}
