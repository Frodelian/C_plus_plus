#include "std_lib_facilities.h"
#include "windows.h"

int igr;
int bot;
int repeat = 1;

void error() {
	while (igr != 1 && igr != 2 && igr != 3) {
		std::cout << "Ты точно умеешь читать? Или тебе так сложно попасть по 1, 2 или 3?\n";
		std::cout << "Даю тебе ещё одну попытку.\n";
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
		std::cout << "---Камень, ножницы, бумага---\n";
		std::cout << "Игра начнётся через 5 секунд\n";
		Sleep(5000);
		std::cout << "Нападай, ну давай чего ты ждёшь??!!\n";
		Sleep(2000);
		std::cout << "Постой ты же не выбрал оружие: камень = 1, ножницы = 2, бумага = 3.\n";
		std::cin >> igr;
		switch (igr) {
		case 1:
			std::cout << "Ваше оружие камень\n";
			break;
		case 2:
			std::cout << "Ваше оружие ножницы\n";
			break;
		case 3:
			std::cout << "Ваше оружие бумага\n";
			break;
		default:
			error();
			break;
		}
		Sleep(2000);
		std::cout << "Камень...";
		Sleep(1000);
		std::cout << "Ножницы...";
		Sleep(1000);
		std::cout << "Бумага...\n";
		botor();
		std::cout << igr << " " << bot << "\n";
		if (bot == 1 && igr == 1) {
			std::cout << "Ничья\n";
		}
		if (bot == 2 && igr == 1) {
			std::cout << "Вы меня победили\n";
		}
		if (bot == 3 && igr == 1) {
			std::cout << "Я победил хахаха\n";
		}
		if (bot == 1 && igr == 2) {
			std::cout << "Я победил хахаха\n";
		}
		if (bot == 2 && igr == 2) {
			std::cout << "Ничья\n";
		}
		if (bot == 3 && igr == 2) {
			std::cout << "Вы меня победили\n";
		}
		if (bot == 1 && igr == 3) {
			std::cout << "Вы меня победили\n";
		}
		if (bot == 2 && igr == 3) {
			std::cout << "Я победил хахаха\n";
		}
		if (bot == 3 && igr == 3) {
			std::cout << "Ничья\n";
		}
		std::cout << "Может быть реванш?\n";
		std::cout << "1 - повторить, 2 - закончить\n";
		std::cin >> repeat;
	}
	while (repeat != 1 && repeat != 2);
}