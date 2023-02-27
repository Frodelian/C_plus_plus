#include <iostream>

void foo();

void foo(int a, int b) {
	std::cout << "I am function" << std::endl;
}

int main()
{
	foo(2,3);
}
