#include <iostream>

int main()
{
	for (int i = 0; i < 10; i++) {
		std::cout << "i = " << i << std::endl;
		if (i == 5) {
			break;//выход из цикла
		}
	}
	
}