#include "std_lib_facilities.h"

int main()
{
	vector<double> temps;
	std::cout << "Enter temp: \n";
	for (double temp; std::cin >> temp; )
		temps.push_back(temp); //Ctrl+Z
	double sum = 0;
	for (double x : temps) {
		sum += x;
	}
	std::cout << "Sred temp: " << sum / temps.size() << '\n';
	sort(temps);
	if (temps.size() % 2) {
		cout << "Mediana ne chetnogo reada = " << temps[temps.size() / 2] << '\n';
	}
	else {
		cout << "Mediana chetnogo reada = " << (temps[temps.size() / 2] + temps[temps.size() / 2 - 1]) / 2 << '\n';
	}
	return 0;
}