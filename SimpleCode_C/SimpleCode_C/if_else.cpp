#include <iostream>

int main()
{
	bool isRain = false;

	if (isRain) {
		std::cout << "Yes = Rain" << std::endl;
	}
	else {
		std::cout << "No = Rain" << std::endl;
	}
	
	int i;
	std::cin >> i;
	if (i > 5) {
		std::cout << i << std::endl;
	}
	else if (i == 5) {
		std::cout << i + 5 << std::endl;
	}
	else {
		std::cout << "number" << std::endl;
	}
}