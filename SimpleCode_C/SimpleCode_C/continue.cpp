#include <iostream>

int main()
{
	for (int i = 0; i < 5; i++) {
		if (i == 2) {
			continue;// continue пропускает операцию при i = 2 а break выйдет и завершит программу
		}
		std::cout << "i = " << i << std::endl;
	}
}