//��������� ������ (����� ������������ ��� ����� �������� ���)
#include <iostream>

int main()
{
	const int ROW = 3; //���������� �����
	const int COL = 4; //���������� �������

	int masdob[ROW][COL]{ { 2, 3, 4, 5 }, { 2, 3, 4, 5 }, { 2, 3, 4, 5 } };

	int arr[ROW][COL]{};// �������� ��� �������� {}
	
	std::cout << arr[1][1] << std::endl;

	arr[2][0] = 11111;

	arr[1][1] = 55;

	std::cout << arr[1][1] << std::endl;

	std::cout << "***************" << std::endl; 
	std::cout << "***************" << std::endl;
	//���������� ���������� �������  � ��� ������
	const int ROWS = 5;
	const int COLS = 8;

	int massif[ROWS][COLS];
	//���������� ������ ���������� ����������
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			massif[i][j] = rand() % 10;
		}
	}
	//������
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			std::cout << massif[i][j] << "\t";
		}
		std::cout << std::endl;
	}

}