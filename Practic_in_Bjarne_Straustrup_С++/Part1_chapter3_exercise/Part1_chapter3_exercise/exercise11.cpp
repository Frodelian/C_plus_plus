//Упражнение 11
#include "std_lib_facilities.h"

int s1;
int s2;
int s3;
int s4;
int s5;

void simple_error() {
	std::cout << "Are you kidding?\n";
	std::cin >> s1;
	std::cin >> s2;
	std::cin >> s3;
	std::cin >> s4;
	std::cin >> s5;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	std::cout << "Сколько у вас монет?\n";
	std::cout << "Введите число одноцентовых: \n";
	std::cin >> s1;
	std::cout << "Введите число пятицентовых: \n";
	std::cin >> s2;
	std::cout << "Введите число десятицентовых: \n";
	std::cin >> s3;
	std::cout << "Введите число двадцатипятицентовых: \n";
	std::cin >> s4;
	std::cout << "Введите число пятидесятицентовых: \n";
	std::cin >> s5;
	while (s1 < 0 || s2 < 0 || s3 < 0 || s4 < 0 || s5 < 0) {
		simple_error();
	}
	if (s1 == 1) {
		std::cout << "У вас " << s1 << " одноцентовая монета.\n";
	}
	else {
		std::cout << "У вас " << s1 << " одноцентовых монет.\n";
	}
	if (s2 == 1) {
		std::cout << "У вас " << s2 << " пятицентовая монета.\n";
	}
	else {
		std::cout << "У вас " << s2 << " пятицентовых монет.\n";
	}
	if (s3 == 1) {
		std::cout << "У вас " << s3 << " десятицентовая монета.\n";
	}
	else {
		std::cout << "У вас " << s3 << " десятицентовых монет.\n";
	}
	if (s4 == 1) {
		std::cout << "У вас " << s4 << " двадцатипятицентовая монета.\n";
	}
	else {
		std::cout << "У вас " << s4 << " двадцатипятицентовых монет.\n";
	}
	if (s5 == 1) {
		std::cout << "У вас " << s5 << " пятидесятицентовая монета.\n";
	}
	else {
		std::cout << "У вас " << s5 << " пятидесятицентовых монет.\n";
	}
	int sum;
	sum = s1 + 5 * s2 + 10 * s3 + 25 * s4 + 50 * s5;
	std::cout << "Общая стоимость ваших монет равна " << sum << " центам.\n";
	if ((sum / 100) != 0) {
		std::cout << "Переводим в доллары: \n";
		int dollar;
		int dolzent;
		dollar = sum / 100;
		dolzent = sum % 100;
		if ((sum / 100) == 1) {
			std::cout << dollar << " доллар " << dolzent << " цента\n";
		}
		else if ((sum % 100) == 1) {
			std::cout << dollar << " долларов " << dolzent << " цент\n";
		}
		else if (((sum / 100) == 1) && ((sum % 100) == 1)) {
			std::cout << dollar << " доллар " << dolzent << " цент\n";
		}
		else
			std::cout << dollar << " долларов " << dolzent << " цента\n";
	}
}