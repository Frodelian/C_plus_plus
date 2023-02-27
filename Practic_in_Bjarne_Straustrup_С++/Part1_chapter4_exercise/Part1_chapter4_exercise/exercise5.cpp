#include "std_lib_facilities.h"

int main()
{
	double fi_num;
	double se_num;
	char operation;
	double otvet;
	std::cout << "Enter two number: " << endl;
	std::cin >> fi_num;
	std::cin >> se_num;
	std::cout << "Enter operation +, -, / or *: " << endl;
	std::cin >> operation;
	switch (operation) {
	case '+':
		otvet = fi_num + se_num;
		std::cout << fi_num << " + " << se_num << " = " << otvet;
		break;
	case '-':
		otvet = fi_num - se_num;
		std::cout << fi_num << " - " << se_num << " = " << otvet;
		break;
	case '/':
		if (se_num == 0) {
			std::cout << "No division by zero!";
		}
		else {
			otvet = fi_num / se_num;
			std::cout << fi_num << " / " << se_num << " = " << otvet;
		}
		break;
	case '*':
		otvet = fi_num * se_num;
		std::cout << fi_num << " * " << se_num << " = " << otvet;
		break;
	case 'q':
		exit(1);
	default:
		std::cerr << "This is not a valid operation, use +, -, * or /" << endl;
		exit(1);
	}
}