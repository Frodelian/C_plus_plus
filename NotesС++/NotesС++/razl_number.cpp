#include "std_lib_facilities.h"

int NUMERIC_BASE = 10;

int main()
{
	int max_digit = -1;
	int min_digit = NUMERIC_BASE;
	int num_of_digits = 0;
	int sum_of_digits = 0;
	int production_of_digits = 1;

	int64_t x;
	int64_t y;
	std::cin >> x;
	y = x >= 0 ? x : -x;
	while (y != 0) {
		int digit = y % NUMERIC_BASE;
		num_of_digits += 1;
		sum_of_digits += digit;
		production_of_digits *= digit;
		max_digit = max(max_digit, digit);
		min_digit = min(min_digit, digit);

		y = y / NUMERIC_BASE;
	}
	std::cout << "num_of_digits = " << num_of_digits << '\n';
	std::cout << "sum_of_digits = " << sum_of_digits << '\n';
	std::cout << "max_digit = " << max_digit << '\n';
	std::cout << "min_digit = " << min_digit << '\n';
	std::cout << "production_of_digits = " << production_of_digits << '\n';
}