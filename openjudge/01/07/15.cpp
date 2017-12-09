#include <iostream>
#include <string>

int main () {

	std::string A;
	int n;
	std::cin >> n;
	for (int b = 0; b < n; b += 1) {
		std::cin >> A;
		for (auto &a : A) {
			if (a >= 'a' && a <= 'z') a -= 32;
			if (a >= 'A' && a <= 'Z') a += 32;
		}
		if (A [0] >= 'a' && A [0] <= 'z') A [0] -= 32;
		std::cout << A << std::endl;
	}
	return 0;
}