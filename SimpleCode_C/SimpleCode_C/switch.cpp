#include <iostream>

int main()
{
	int a;
	std::cin >> a;

	switch (a) 
	{
	case 1: {
		std::cout << 1 << std::endl;
		break;// ���� ������ ����� break � ������ 1 �� � case 2 ���������, � ���� ������ 2 �� ������� ����� ������ case 2
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