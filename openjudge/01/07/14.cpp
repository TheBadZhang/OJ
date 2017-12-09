#include <iostream>
#include <string>

int main () {

	std::string A;
	getline (std::cin, A);
	for (auto &a : A) {
		if (a >= 'a' && a <= 'z') a -= 32;
		else
		if (a >= 'A' && a <= 'Z') a += 32;
	}
	std::cout << A;
	return 0;
}