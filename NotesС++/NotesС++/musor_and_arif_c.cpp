//Мусорные значения m, деление по модулю в С++, тернарный оператор
#include "std_lib_facilities.h"

int main()
{
	int64_t x;
	std::cin >> x;
	int64_t m = x;
	bool is_m_vacant = true;
	std::cout << "m = " << m << endl;
	while (x != 0) {
		if (x % 2 == 0) {
			if (is_m_vacant || x > m) {
				m = x;
				is_m_vacant = false;
			}
		}
		std::cin >> x;
	}
	std::cout << "Max = " << m << endl;
	long b = 0;
	b = (-17) / 5;
	std::cout << "Modul = " << b;
