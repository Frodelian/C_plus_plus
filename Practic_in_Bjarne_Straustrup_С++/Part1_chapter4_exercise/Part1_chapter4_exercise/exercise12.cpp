#include "std_lib_facilities.h"

int main()
{
	int max;
	std::cout << "Enter max: \n";
	std::cin >> max;
	vector<int> numbers(max);
	bool isprime;
	std::cout << "Numbers from 1 to " << max << ":" << '\n';
	for (int i = 0; i < numbers.size(); i++) {
		numbers[i] = i + 1;
		std::cout << numbers[i] << " ";
	}
	std::cout << '\n';
	std::cout << "Prime numbers: \n";
	for (int i = 2; i < max; i++) {
		isprime = true;
		for (int j = 2; j <= i / 2; j++) {
			if ((i % j) == 0) {
				isprime = false;
			}
		}
		if (isprime) {
			std::cout << i << " ";
		}
	}
	return 0;
}