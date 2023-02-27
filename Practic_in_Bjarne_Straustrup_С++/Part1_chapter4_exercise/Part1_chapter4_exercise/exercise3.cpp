#include "std_lib_facilities.h"

int main()
{
	vector<double> rast;
	std::cout << "Enter rast: \n";
	for (double ras; std::cin >> ras; )
		rast.push_back(ras);
	double sum = 0;
	for (double x : rast) {
		sum += x;
	}
	std::cout << "Summa rast = " << sum << '\n';
	double min = rast[0];
	double max = rast[0];
	for (int i = 0; i < rast.size(); ++i) {
		if (rast[i] < min) {
			min = rast[i];
		}
	}
	for (int i = 0; i < rast.size(); ++i) {
		if (rast[i] > max) {
			max = rast[i];
		}
	}
	std::cout << "Minimal rast = " << min << '\n';
	std::cout << "Maximal rast = " << max << '\n';
	std::cout << "Sredn rast = " << sum / rast.size() << '\n';
	return 0;
}