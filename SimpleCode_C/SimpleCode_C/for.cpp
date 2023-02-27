#include <iostream>

int main() 
{
	int i = 0;

	for (; i < 10; i++) {
		std::cout << i << std::endl;
	}

	for (; i < 20; ) {
		std::cout << i << std::endl;
		i++;
	}
	for (int i = 0, j = 10; i < 10; i++, j--) {
		std::cout << "j = " << j << " " << "i = " << i << std::endl;
	}
	//Бесконечный цикл
	for (; ; ) {
		std::cout << i;
	}
}