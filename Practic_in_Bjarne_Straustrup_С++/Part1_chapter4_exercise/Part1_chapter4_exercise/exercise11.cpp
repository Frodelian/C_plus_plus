#include "std_lib_facilities.h"

// 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97

int main()
{
	vector<int> numbers(100);
	bool isprime;
	std::cout << "Numbers from 1 to 100: \n";
	for (int i = 0; i < numbers.size(); i++) {
		numbers[i] = i + 1;
		std::cout << numbers[i] << " ";
	}
	std::cout << '\n';
	std::cout << "Prime numbers: \n";
	for (int i = 2; i < 100; i++) {
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