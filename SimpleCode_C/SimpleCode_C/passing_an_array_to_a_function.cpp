#include <iostream>

//функции, передача аргументов(параметры)

void FillArray(int arr[], const int size) {
	srand(time(NULL));
	int a = sizeof(arr); //4 байта с помощью sizeof нельзя так как передаёт только ссылку, а нам нужно протись по всем элементам
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10;
	}
}

void PrintArray(int arr[], const int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << std::endl;
	}
}

int main()
{
	const int SIZE = 10;
	int massiv[SIZE];
	int a = sizeof(massiv);
	FillArray(massiv, SIZE);
	PrintArray(massiv, SIZE);

}