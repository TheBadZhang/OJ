#include <iostream>
#include <string>
// #include <vector>


struct Student {
	std::string Name;
	int Sorce;
};

int
main () {

	int n;
	scanf ("%d", &n);
	Student *list = new Student [n];
	int max = 0, b = -1;
	for (int a = 0; a < n; a += 1) {
		std::cin >> list [a].Sorce >> list [a].Name;
		if (list [a].Sorce > max) {
			max = list [a].Sorce;
			b = a;
		}
	}

	std::cout << list [b].Name;


	return 0;
}