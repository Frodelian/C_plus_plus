#include <iostream>

int main()
{
	int a;
	std::cout << "a = " << sizeof(a) << std::endl; // ������� 4 = ����� ������ ���������� �� ���������� ���� int a
	std::cout << "***************" << std::endl;

	int arr[] = { 2, 5, 10, 222, 334 };

	std::cout << sizeof(arr) << std::endl; // ���������� ������� ������ �������� �����, 20 ��� ��� 5 �������� ���� int
	std::cout << "***************" << std::endl;
	std::cout << sizeof(arr) / sizeof(int) << std::endl; // ���������� ����� ��������� � �������(20/4)
	std::cout << "***************" << std::endl;

	for (int i = 0; i < sizeof(arr); i++) {
		std::cout << arr[i] << std::endl;
	}
	std::cout << "***************" << std::endl;
	//����� ���� ��������� �������
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		std::cout << arr[i] << std::endl;
	}
}