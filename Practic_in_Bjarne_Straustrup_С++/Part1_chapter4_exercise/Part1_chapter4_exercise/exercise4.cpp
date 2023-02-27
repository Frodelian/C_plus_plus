#include "std_lib_facilities.h"

int main()
{
	int lower = 1;
	int upper;
	int middle;

	string answer;
	
	std::cout << "Enter max number" << endl;
	std::cin >> upper;
	while (lower < upper) {
		middle = (upper + lower) / 2;
		
		do {
			std::cout << "Is it less or equal then " << middle << "? (Yes or No)" << endl;
			std::cin >> answer;
		} while (answer != "Yes" && answer != "No");
		if (answer == "Yes") {
			upper = middle;
		}
		else {
			lower = middle + 1;
		}
		std::cout << "[" << lower << " : " << upper << "]" << endl;
	}
	std::cout << "Your number is " << upper << endl;
}
