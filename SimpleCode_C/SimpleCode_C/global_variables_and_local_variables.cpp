#include <iostream>

//������� ���������. ���������� ���������� � ��������� ����������.
// ���������� � ������� �� ���������, ������������� ���������������� �������
int z = 10; // ���������� ����������
int value;  // ���������� ����������

void foo() {
	int z; // ��������� ����������
}

int main()
{
	int a; // ��������� ���������� 

	if (true) {
		int a; // ��������� ����������
		a = 0;
	}

	a = 22;

	for (int i = 0; i < 10; i++) {
		i = 10; // ��������� ����������
	}


}