#include <iostream>

// �������� ���������� � ������� �� ���������

void foo(int a = 5, double b = 0.5) { //�������� �� ��������� 5
	for (int i = 0; i < a; i++) {
		std::cout << "#" << std::endl;
	}
}

int main()
{
	foo(10, 4.4);
}