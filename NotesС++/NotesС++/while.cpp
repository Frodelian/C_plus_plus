//������ while
#include "std_lib_facilities.h"

int main()
{
	char bukva = 'a' - 1;
	while (++bukva <= 'z') {
		std::cout << bukva << '\t' << int(bukva) << '\n'; // ����� ������ �� ������ � ���� ����� ����� 
														  // ����� �� ������ �� �������� 
	} // \t �������������� ���������(������ ������) 
	return 0;
}
