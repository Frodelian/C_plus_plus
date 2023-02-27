//Пример while
#include "std_lib_facilities.h"

int main()
{
	char bukva = 'a' - 1;
	while (++bukva <= 'z') {
		std::cout << bukva << '\t' << int(bukva) << '\n'; // можно ничего не писать в теле цикла тогда 
														  // тогда он ничего не выполнит 
	} // \t горизонтальная табуляция(отступ вправо) 
	return 0;
}
