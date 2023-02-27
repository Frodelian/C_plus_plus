//Вложенный цикл. Вложенная конструкция.
#include <iostream>

int main()
{
	for (int i = 1; i < 5; i++) {
		std::cout << "1 cycle for iterr & " << i << std::endl;
		for (int j = 1; j < 5; j++) {
			std::cout << "\t2 cycle for iterr & " << j << std::endl;
		}
	}
}