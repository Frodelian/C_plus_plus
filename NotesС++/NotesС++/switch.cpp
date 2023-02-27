//Пример switch
#include "std_lib_facilities.h"

int main()
{
	constexpr double cm_per_duim = 2.54;
	double length = 1;
	char unit = 'a';
	cout << "Enter length" << " and izmer (c or i) :\n";
	cin >> length >> unit;
	switch (unit) {
	case 'i':
		cout << length << "in == " << cm_per_duim << "cm\n";
		break;
	case 'c':
		cout << length << "cm == " << length / cm_per_duim << "in\n";
		break;
	default:
		cout << "Sorry, i don't no " << unit << "\n";
		break;
	}

	return 0;
}