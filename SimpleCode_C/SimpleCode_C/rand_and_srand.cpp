//Генератор случайных чисел
#include <iostream>
#include <ctime>

int main()
{
	//псевдо случайные числа 
	srand(25);//отправная точка от которой зависит генерация случайных чисел
	int a = rand();
	std::cout << a << std::endl;
	a = rand();
	std::cout << a << std::endl;

	std::cout << "***************" << std::endl;
	//генератор случайных чисел  с time
	srand(time(NULL));
	int s = rand();
	std::cout << s << std::endl;
	s = rand();
	std::cout << s << std::endl;

	std::cout << "***************" << std::endl;
	//генератор случайных чисел с time от 0 до 10
	srand(time(NULL));
	int m = rand() % 10;
	std::cout << m << std::endl;
	m = rand() % 10;
	std::cout << m << std::endl;

	std::cout << "***************" << std::endl;
	//генератор случайных чисел с time от 5 до 15
	srand(time(NULL));
	int d = rand() % 10 + 5;
	std::cout << d << std::endl;
	d = rand() % 10 + 5;
	std::cout << d << std::endl;

	std::cout << "***************" << std::endl;
	srand(time(NULL));
	const int SIZE = 10;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 10;
	}
	for (int i = 0; i < SIZE; i++) {
		std::cout << arr[i] << std::endl;
	}
	std::cout << "***************" << std::endl;
	std::cout << "***************" << std::endl;
	//заполнить массив уникальными случайными числами
	srand(time(NULL));

	const int size = 10;
	int massif[size];

	bool alreadyTheare; //уже есть переменная

	for (int i = 0; i < size; ) {
		alreadyTheare = false;
		int newRandomValue = rand() % 20;
		for (int j = 0; j < i; j++) {
			massif[i] = rand() % 20;
			if (massif[j] == newRandomValue) {
				alreadyTheare = true;
				break;
			}
		}
		if (!alreadyTheare) {
			massif[i] = newRandomValue;
			i++;
		}
	}
	for (int i = 0; i < size; i++) {
		std::cout << massif[i] << std::endl;
	}
	//минимальное число в массиве
	int minValue = massif[0];

	for (int i = 1; i < size; i++) {
		if (massif[i] < minValue) {
			minValue = massif[i];
		}
	}
	std::cout << "Min = " << minValue << std::endl;
}