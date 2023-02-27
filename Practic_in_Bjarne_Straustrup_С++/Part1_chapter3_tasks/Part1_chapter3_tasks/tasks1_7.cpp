#include "std_lib_facilities.h"

int age;

void simple_error() {
	std::cout << "Are you kidding?\n";
	std::cin >> age;
}

int main()
{
	std::cout << "Enter recipient's name (and press 'enter'):\n";
	std::string first_name;
	std::cin >> first_name;
	std::cout << "How old are you?\n";
	std::cin >> age;
	while (age < 0 || age>110) {
		simple_error();
	}
	std::cout << "Darling " << first_name << "," << "how are you?\n"
		<< "I'm fine. I miss you.\n";
	std::cout << "Do you remember the name of our friend? \n";
	std::string friend_name;
	std::cin >> friend_name;
	std::cout << "How long have you meet " << friend_name << "?\n";
	std::cout << "Is it a female or male name?(enter 'm' or 'f')\n";
	char friend_sex;
	std::cin >> friend_sex;
	if (friend_sex == 'm') {
		std::cout << "If you see " << friend_name << ", " << "please ask him to call me.\n";
	}
	else {
		std::cout << "If you see " << friend_name << ", " << "please ask her to call me.\n";
	}
	std::cout << "I hear you just celebrated your birthday and you are " << age << " years old.\n";
	if (age < 12) {
		std::cout << "Next year you " << age + 1 << " years old\n";
	}
	if (age == 17) {
		std::cout << "Next year you can vote\n";
	}
	if (age > 70) {
		std::cout << "I hope you don't bored in retirement\n";
	}
	std::cout << "\n" << "\n" << "Sincerely yours Oleg\n";
}