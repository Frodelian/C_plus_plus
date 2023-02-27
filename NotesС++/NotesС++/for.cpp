//Пример for
#include "std_lib_facilities.h"

int main()
{
	for (char bukva = 'a' - 1; ++bukva <= 'z';)
		std::cout << bukva << '\t' << int(bukva) << '\n';
	for (char bigbukva = 'A' - 1; ++bigbukva <= 'Z';)
		std::cout << bigbukva << '\t' << int(bigbukva) << '\n';
	return 0;
}