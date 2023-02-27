#include <iostream>

int main()
{
	int a;
	std::cin >> a;

	switch (a) 
	{
	case 1: {
		std::cout << 1 << std::endl;
		break;// Если убрать здесь break и ввести 1 то и case 2 сработает, а если ввести 2 то выведен будет только case 2
	}
	case 2: {
		std::cout << 2 << std::endl;
		break;
	}
	default: {
		std::cout << "I dont know this number" << std::endl;
		break;
	}
	}
}