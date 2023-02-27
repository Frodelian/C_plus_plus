//”пражнение номер 8 с.170
#include "std_lib_facilities.h"

int main()
{
	int kletok = 1;
	int sum = 1;
	int pred = 1;

	while (sum <= 1000) {
		pred *= 2;
		sum += pred;
		kletok++;
		std::cout << "------------------------------------------------------------\n";
		std::cout << "Number of cells = " << kletok << "\n";
		std::cout << "The number of grains in the last cell = " << pred << "\n";
		std::cout << "The sum of grains in all previous cells = " << sum << "\n";
		std::cout << "------------------------------------------------------------\n";
	}
	std::cout << "The inventor received 1000 grains of rice\n";
	while (sum <= 1000000) {
		pred *= 2;
		sum += pred;
		kletok++;
		std::cout << "------------------------------------------------------------\n";
		std::cout << "Number of cells = " << kletok << "\n";
		std::cout << "The number of grains in the last cell = " << pred << "\n";
		std::cout << "The sum of grains in all previous cells = " << sum << "\n";
		std::cout << "------------------------------------------------------------\n";
	}
	std::cout << "The inventor received 1000000 grains of rice\n";
	while (sum <= 1000000000) {
		pred *= 2;
		sum += pred;
		kletok++;
		std::cout << "------------------------------------------------------------\n";
		std::cout << "Number of cells = " << kletok << "\n";
		std::cout << "The number of grains in the last cell = " << pred << "\n";
		std::cout << "The sum of grains in all previous cells = " << sum << "\n";
		std::cout << "------------------------------------------------------------\n";
	}
	std::cout << "The inventor received 1000000000 grains of rice\n";
	return 0;
}