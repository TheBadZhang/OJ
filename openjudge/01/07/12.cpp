#include <iostream>
#include <string>

int main () {

	std::string A, B;
	std::cin >> A;
	for (auto &a : A) {
		if (a >= 'a' && a <= 'z') {
			if (a + 3 > 'z') a -= 26;
			a -= 32;
		} else if (a >= 'A' && a <= 'Z') {
			if (a + 3 > 'Z') a -= 26;
			a += 32;
		}
		a += 3;

	}
	// std::cout << A;
	for (int a = 0; a < A.length () / 2; a += 1) {
		char ch = A [A.length () - a-1];
		A [A.length () - a-1] = A [a];
		A [a] = ch;
	}

	std::cout << A;


	return 0;
}