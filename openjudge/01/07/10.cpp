#include <string>
#include <iostream>

#define B(c, b) a >= c && a <= b

int main () {

	std::string A;
	getline (std::cin, A);


	for (auto a : A) {
		if (B ('A', 'Z')) {
			if (a <= 'E') {
				std::cout << (char)(a-5+26);
				continue;
			}
			std::cout << (char)(a-5);
		} else {
			std::cout << a;
		}
	}


	return 0;
}