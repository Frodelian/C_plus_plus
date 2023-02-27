//Задание номер 1 стр. 166
#include "std_lib_facilities.h"

int main()
{
	constexpr char terminathionChar = '|';
	char c = 0;
	int num1;
	int num2;
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
		std::cout << "Entered numbers: " << num1 << " " << num2 << '\n';
	}
	return 0;
}