#include <string>
#include <iostream>

#define B(c, b) a >= c && a <= b

int main () {

	std::string A;
	getline (std::cin, A);


	for (auto a : A) {
		if (B ('a', 'z') || B ('A', 'Z')) {
			if (a == 'z') {
				std::cout << 'a';
				continue;
			}
			if (a == 'Z') {
				std::cout << 'A';
				continue;
			} else {
				std::cout << (char)(a+1);
			}
		} else {
			std::cout << a;
		}
	}


	return 0;
}