#include <string>
#include <iostream>

int main () {

	std::string A;
	std::cin >> A;
	char b, p;
	std::cin >> b >> p;


	for (auto a : A) {
		if (a == b) {
			std::cout << p;
		} else {
			std::cout << a;
		}
	}


	return 0;
}