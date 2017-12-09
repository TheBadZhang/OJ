#include <iostream>
#include <string>

int main () {


	std::string A;
	std::cin >> A;
	for (int a = 0; a < A.size (); a += 1) {
		if (A [a] != A [A.size () - a - 1]) {
			std::cout << "no";
			return 0;
		}
	}
	std::cout << "yes";

	return 0;
}