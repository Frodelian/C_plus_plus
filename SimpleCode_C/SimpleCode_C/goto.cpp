#include <iostream>
//goto ������������� �� ��������� ������ � ������ ����� ��������
int main()
{

	std::cout << "One" << std::endl;

	goto link;

	std::cout << "Two" << std::endl;

	std::cout << "Three" << std::endl;

	link:

	std::cout << "Four" << std::endl;

	std::cout << "Five" << std::endl;

}