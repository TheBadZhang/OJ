#include <string>
#include <iostream>

#define B(c, b) a >= c && a <= b

int main () {

	std::string A;
	getline (std::cin, A);
	if (A [0] >= '0' && A [0] <= '9') {
		std::cout << "no";
		return 0;
	}
	for (auto a : A) {
		if (!(B ('0','9') || B ('a', 'z') || B ('A', 'Z') || a == '_')) {
			std::cout << "no";
			return 0;
		}
	}
	std::cout << "yes";


	return 0;
}