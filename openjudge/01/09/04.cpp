#include <iostream>
#include <string>

struct Student {
	std::string Name;
	int Exam, Class;
	char GjBu, XiBu;
	int LpWf;
	int money;
};

int 
main () {

	int n;
	std::cin >> n;
	Student *list = new Student [n];
	int max = 0, b = 0, total = 0;
	for (int a = 0; a < n; a += 1) {
		std::cin >> list [a].Name >> list [a].Exam >> list [a].Class >> list [a].GjBu >> list [a].XiBu >> list [a].LpWf;
		list [a].money = 0;
		if (list [a].Exam > 80 && list [a].LpWf >= 1) {
			list [a].money += 8000;
		}
		if (list [a].Exam > 85 && list [a].Class > 80) {
			list [a].money += 4000;
		}
		if (list [a].Exam > 90) {
			list [a].money += 2000;
		}
		if (list [a].Exam > 85 && list [a].XiBu == 'Y') {
			list [a].money += 1000;
		}
		if (list [a].Class > 80 && list [a].GjBu == 'Y') {
			list [a].money += 850;
		}
		if (list [a].money > max) {
			max = list [a].money;
			b = a;
		}
		total += list [a].money;
	}
	std::cout << list [b].Name << "\n" << max << "\n" << total;

	return 0;
}