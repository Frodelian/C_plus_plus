//”пражнение 10
#include "std_lib_facilities.h"

std::string operation;

void simple_error() {
	std::cout << "Are you kidding?\n";
	std::cin >> operation;
}

int main()
{
	double x;
	double y;
	double z = 0;
	std::cout << "Enter two number\n";
	std::cin >> x;
	std::cin >> y;
	std::string s1 = "plus";
	std::string s2 = "minus";
	std::string s3 = "mul";
	std::string s4 = "div";
	std::string h1 = "+";
	std::string h2 = "-";
	std::string h3 = "*";
	std::string h4 = "/";
	std::cout << "Enter operation\n";
	std::cin >> operation;
	while (operation != s1 && operation != h1
		&& operation != s2 && operation != h2
		&& operation != s3 && operation != h3
		&& operation != s4 && operation != h4) {
		simple_error();
	}
	if (operation == s1 || operation == h1) {
		z = x + y;
		std::cout << x << " + " << y << " = " << z;
	}
	if (operation == s2 || operation == h2) {
		z = x - y;
		std::cout << x << " - " << y << " = " << z;
	}
	if (operation == s3 || operation == h3) {
		z = x * y;
		std::cout << x << " * " << y << " = " << z;
	}
	if (operation == s4 || operation == h4) {
		z = x / y;
		std::cout << x << " / " << y << " = " << z << "\n";
	}
}
