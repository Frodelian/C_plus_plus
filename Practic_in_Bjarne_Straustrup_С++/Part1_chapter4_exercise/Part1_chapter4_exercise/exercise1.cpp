#include "std_lib_facilities.h"

int main()
{
	/*vector<double> temps;
	std::cout << "Enter temp: \n";
	for (double temp; std::cin >> temp; )
		temps.push_back(temp);
	double sum = 0;
	for (int x : temps) sum += x;
	std::cout << "Sred temp: " << sum / temps.size() << '\n';
	sort(temps);
	std::cout << "Mediana temp: " << temps[temps.size() / 2] << '\n';
	return 0;*/
	vector<string> dislikes = { "Broccoli", "Mam", "Pap" };
	vector<string> words;
	std::cout << "Enter words: \n";
	for (string word; cin >> word; ) {
		words.push_back(word);
		string del = "exit";
		if (word == del) {
			break;
		}
	}
	words.pop_back();
	std::cout << "Koll clov: " << words.size() << '\n';
	sort(words);
	for (int i = 0; i < words.size(); ++i) {  //отличается ли предыдущее слово от вновь веденного. Очевидно, что у первого слова предшественника нет(i == O)
		if (i == 0 || words[i - 1] != words[i]) {
			int j;
			for (j = 0; j < dislikes.size(); ++j) {
				if (words[i] == dislikes[j]) {
					break;
				}
			}
			if (j != dislikes.size()) {
				std::cout << "BLEEP" << '\n';
			}
			else {
				std::cout << words[i] << '\n';
			}
		}

	}
}