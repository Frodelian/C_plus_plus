#include "std_lib_facilities.h"
#include "windows.h"

int igr;
int bot;
int repeat = 1;

void error() {
	while (igr != 1 && igr != 2 && igr != 3) {
		std::cout << "�� ����� ������ ������? ��� ���� ��� ������ ������� �� 1, 2 ��� 3?\n";
		std::cout << "��� ���� ��� ���� �������.\n";
		std::cin >> igr;
	}
}

void botor() {
	srand(time(NULL));
	bot = 1 + rand() % 3;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	while (repeat == 1) {
		std::cout << "---������, �������, ������---\n";
		std::cout << "���� ������� ����� 5 ������\n";
		Sleep(5000);
		std::cout << "�������, �� ����� ���� �� ����??!!\n";
		Sleep(2000);
		std::cout << "������ �� �� �� ������ ������: ������ = 1, ������� = 2, ������ = 3.\n";
		std::cin >> igr;
		switch (igr) {
		case 1:
			std::cout << "���� ������ ������\n";
			break;
		case 2:
			std::cout << "���� ������ �������\n";
			break;
		case 3:
			std::cout << "���� ������ ������\n";
			break;
		default:
			error();
			break;
		}
		Sleep(2000);
		std::cout << "������...";
		Sleep(1000);
		std::cout << "�������...";
		Sleep(1000);
		std::cout << "������...\n";
		botor();
		std::cout << igr << " " << bot << "\n";
		if (bot == 1 && igr == 1) {
			std::cout << "�����\n";
		}
		if (bot == 2 && igr == 1) {
			std::cout << "�� ���� ��������\n";
		}
		if (bot == 3 && igr == 1) {
			std::cout << "� ������� ������\n";
		}
		if (bot == 1 && igr == 2) {
			std::cout << "� ������� ������\n";
		}
		if (bot == 2 && igr == 2) {
			std::cout << "�����\n";
		}
		if (bot == 3 && igr == 2) {
			std::cout << "�� ���� ��������\n";
		}
		if (bot == 1 && igr == 3) {
			std::cout << "�� ���� ��������\n";
		}
		if (bot == 2 && igr == 3) {
			std::cout << "� ������� ������\n";
		}
		if (bot == 3 && igr == 3) {
			std::cout << "�����\n";
		}
		std::cout << "����� ���� ������?\n";
		std::cout << "1 - ���������, 2 - ���������\n";
		std::cin >> repeat;
	}
	while (repeat != 1 && repeat != 2);
}