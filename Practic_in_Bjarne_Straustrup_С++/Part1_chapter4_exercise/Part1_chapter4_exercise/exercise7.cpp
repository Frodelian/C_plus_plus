#include "std_lib_facilities.h"

vector<string> numbers{ "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

// tries to read an integer from input; if this fails, input is cleared and read as a string

int get_number()
{
	int inp = 0;
	if (std::cin >> inp)
		return inp;
	cin.clear();
	string inp_s;
	std::cin >> inp_s;
	for (int i = 0; i < numbers.size(); ++i) {
		if (numbers[i] == inp_s)
			return i;
	}
	// this is only executed if input is not valid
	return (-1);
}

int main()
{
	int fi_num;
	int se_num;
	char operation;
	int otvet;
	bool flag = true;
	while (flag) {
		std::cout << "Enter two number: " << endl;
		fi_num = get_number();
		se_num = get_number();
		std::cout << "Enter operation +, -, / or * (enter q to stop program) : " << endl;
		std::cin >> operation;
		switch (operation) {
		case '+':
			otvet = fi_num + se_num;
			std::cout << fi_num << " + " << se_num << " = " << otvet << endl;
			break;
		case '-':
			otvet = fi_num - se_num;
			std::cout << fi_num << " - " << se_num << " = " << otvet << endl;
			break;
		case '/':
			if (se_num == 0) {
				std::cout << "No division by zero!" << endl;
			}
			else {
				otvet = fi_num / se_num;
				std::cout << fi_num << " / " << se_num << " = " << otvet << endl;
			}
			break;
		case '*':
			otvet = fi_num * se_num;
			std::cout << fi_num << " * " << se_num << " = " << otvet << endl;
			break;
		case 'q':
			flag = false;
			break;
		default:
			std::cerr << "This is not a valid operation, use +, -, * or /" << endl;
			flag = false;
			break;
		}
	}
}