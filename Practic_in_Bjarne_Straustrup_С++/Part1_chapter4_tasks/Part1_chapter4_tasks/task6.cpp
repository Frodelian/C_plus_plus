//Задание номер 6 стр. 166
#include "std_lib_facilities.h"

int main()
{
	constexpr double tolerance = 1.0 / 100;
	constexpr char terminathionChar = '|';
	char c = 0;
	double num1;
	double num2;
	while (c != terminathionChar) {
		std::cout << "Enter two numbers or enter " << terminathionChar << " to exit." << '\n';
		std::cin >> num1;
		std::cin >> num2;
		if (!std::cin.good()) {
			std::cin.clear();
			std::cin.get(c);
			if (c != terminathionChar) {
				std::cout << "Invalid number or termination, please try again.\n";
			}
			continue;
		}
		std::cout << "Entered numbers: " << num1 << ", " << num2 << '\n';
		if (0 < fabs(num2 - num1) <= 1.0 / 100) {
			std::cout << "The numbers are almost equal " << fabs(num2 - num1) << '\n';
		}
		else if (num1 == num2) {
			std::cout << "The numbers are equal " << num1 << " = " << num2 << '\n';
		}
		else {
			if (num1 > num2) {
				std::swap(num1, num2);
			}
			std::cout << "Highest value = " << num2 << '\n';
			std::cout << "Minimum value = " << num1 << '\n';

		}
	}
	return 0;
}