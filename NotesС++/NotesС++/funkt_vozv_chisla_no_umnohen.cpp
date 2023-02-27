//Пример
#include "std_lib_facilities.h"

int print_square(int n)// функция возведения в квадрат целого числа не использующая умножение
{
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		ans += n;
	}
	return ans;
}

int main()
{
	std::cout << "Enter x ";
	int x;
	std::cin >> x;
	int y = print_square(x);
	std::cout << y << endl;
	return 0;
}