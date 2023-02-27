#include "std_lib_facilities.h"

int main()
{
	vector<string> numbers{ "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	std::cout << "Enter a number from 1 to 9 word";
	std::string num;
	while (std::cin >> num) {
		for (int i = 0; i < numbers.size(); i++) {
			if (num == numbers[i]) {
				std::cout << i << '\n';
			}
			else {
				if (num == to_string(i)) {
					std::cout << numbers[i] << '\n';
				}
			}
		}
	}
	return 0;
}