//���������� 11
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

	std::cout << "������� � ��� �����?\n";
	std::cout << "������� ����� ������������: \n";
	std::cin >> s1;
	std::cout << "������� ����� ������������: \n";
	std::cin >> s2;
	std::cout << "������� ����� ��������������: \n";
	std::cin >> s3;
	std::cout << "������� ����� ��������������������: \n";
	std::cin >> s4;
	std::cout << "������� ����� ������������������: \n";
	std::cin >> s5;
	while (s1 < 0 || s2 < 0 || s3 < 0 || s4 < 0 || s5 < 0) {
		simple_error();
	}
	if (s1 == 1) {
		std::cout << "� ��� " << s1 << " ������������ ������.\n";
	}
	else {
		std::cout << "� ��� " << s1 << " ������������ �����.\n";
	}
	if (s2 == 1) {
		std::cout << "� ��� " << s2 << " ������������ ������.\n";
	}
	else {
		std::cout << "� ��� " << s2 << " ������������ �����.\n";
	}
	if (s3 == 1) {
		std::cout << "� ��� " << s3 << " �������������� ������.\n";
	}
	else {
		std::cout << "� ��� " << s3 << " �������������� �����.\n";
	}
	if (s4 == 1) {
		std::cout << "� ��� " << s4 << " �������������������� ������.\n";
	}
	else {
		std::cout << "� ��� " << s4 << " �������������������� �����.\n";
	}
	if (s5 == 1) {
		std::cout << "� ��� " << s5 << " ������������������ ������.\n";
	}
	else {
		std::cout << "� ��� " << s5 << " ������������������ �����.\n";
	}
	int sum;
	sum = s1 + 5 * s2 + 10 * s3 + 25 * s4 + 50 * s5;
	std::cout << "����� ��������� ����� ����� ����� " << sum << " ������.\n";
	if ((sum / 100) != 0) {
		std::cout << "��������� � �������: \n";
		int dollar;
		int dolzent;
		dollar = sum / 100;
		dolzent = sum % 100;
		if ((sum / 100) == 1) {
			std::cout << dollar << " ������ " << dolzent << " �����\n";
		}
		else if ((sum % 100) == 1) {
			std::cout << dollar << " �������� " << dolzent << " ����\n";
		}
		else if (((sum / 100) == 1) && ((sum % 100) == 1)) {
			std::cout << dollar << " ������ " << dolzent << " ����\n";
		}
		else
			std::cout << dollar << " �������� " << dolzent << " �����\n";
	}
}