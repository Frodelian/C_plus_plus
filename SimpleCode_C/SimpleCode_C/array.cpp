//���������� ������
#include <iostream>

int main()
{
	int arr[4];

	arr[0] = 5;
	arr[1] = 7;
	arr[2] = 10;
	arr[3] = 3333;

	std::cout << arr[3] << std::endl;
	
	int mass[] = { 1, 66, 12, 2 };
	int di[1000] = { 1, 2 }; // ��� ���� ����� ������ ����
	

	
	const int size = 5;
	
	int massif[size] = { 4, 5, 54, 34, 86 };
	for (int i = 0; i < size; i++) { //������ ���������� � �������
		massif[i] = i;
	}

	for (int i = 0; i < size; i++) { // ����� �������
		std::cout << massif[i] << std::endl;
	}
	


}