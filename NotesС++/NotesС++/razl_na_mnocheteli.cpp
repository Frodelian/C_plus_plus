//Разложение на множетели
#include "std_lib_facilities.h"

int main()
{
	int d = 2;
	int x;
	std::cout << "Enter number " << endl;
	std::cin >> x;
	std::cout << "Multipliers:" << endl;
	while (x != 1) {
		if (x % d == 0) {
			std::cout << d << endl;
			x = x / d;
		}
		else {
			d++;
		}
	}
}