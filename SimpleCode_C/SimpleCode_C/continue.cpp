#include <iostream>

int main()
{
	for (int i = 0; i < 5; i++) {
		if (i == 2) {
			continue;// continue ���������� �������� ��� i = 2 � break ������ � �������� ���������
		}
		std::cout << "i = " << i << std::endl;
	}
}