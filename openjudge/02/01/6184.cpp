#include <iostream>


int main () {

	int n, k;
	int list [1010] = {0};

	std::cin >> n >> k;
	for (int a = 0; a < n; a += 1)
		std::cin >> list [a];

	for (int a = 0; a < n; a += 1) {
		for (int b = a + 1; b < n; b += 1) {
			if (k == list [a] + list [b]) {
				std::cout << "yes";
				return 0;
			}
		}
	}

	std::cout << "no";


	return 0;
}