#include "std_lib_facilities.h"

int main()
{
	int kletok = 1;
	int sum = 1;
	int pred = 1;
	int max_rise_int = 1;
	double max_rice_double = 1;

	/*while (sum <= 1000) {
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
	std::cout << "The inventor received 1000000000 grains of rice\n";*/
	while (kletok < 64) {
		pred *= 2;
		max_rise_int += pred;
		kletok++;
		std::cout << "------------------------------------------------------------\n";
		std::cout << "Number of cells = " << kletok << "\n";
		std::cout << "The number of grains in the last cell = " << pred << "\n";
		std::cout << "The sum of grains in all previous cells = " << max_rise_int << "\n";
		std::cout << "------------------------------------------------------------\n";
	}
	while (kletok < 64) {
		pred *= 2;
		max_rice_double += pred;
		kletok++;
		std::cout << "------------------------------------------------------------\n";
		std::cout << "Number of cells = " << kletok << "\n";
		std::cout << "The number of grains in the last cell = " << pred << "\n";
		std::cout << "The sum of grains in all previous cells = " << max_rice_double << "\n";
		std::cout << "------------------------------------------------------------\n";
	}
	return 0;

}