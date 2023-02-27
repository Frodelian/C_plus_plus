#include <iostream>

/*

	возвращаемое_значение им€_функции (параметры)
	{
	   блок_повтор€ющегос€_кода (тело);
	}

*/

void foo() {
	std::cout << "I am function" << std::endl;
}

int Sum(int a, int b) {
	int result;
	result = a + b;
	return result;
}

int Summa(int a, int b) {
	return a+b;
}

int fuu(int a) {
	return ++a;
}

int main()
{
	foo();

	for (int i = 0; i < 20; i++) {
		foo();
	}

	int c;
	int q = 11;
	int w = 12;
	c = Sum(q, w);
	std::cout << "c = " << c << std::endl;
	std::cout << "c = " << Sum(q, w) << std::endl;
	
	int a = 1;
	a = fuu(a);
	std::cout << "a = " << a << std::endl;
}