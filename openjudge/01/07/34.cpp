#include <iostream>
#include <string>

bool
ishvwf (std::string A) {
	
	for (int a = 0; a <= A.size ()/2; a += 1) {
		if (A [a] != A [A.size () - a - 1]) {
			return false;
		}
	}
	return true;
}

int main () {


	std::string A;
	std::cin >> A;
	for (int a = 0; a < A.size (); a += 1) {
		for (int b = a+1; b < A.size (); b += 1) {
			if (ishvwf (A.substr (a, b))) {
				std::cout << A.substr (a, b) << std::endl;
			}
				std::cout << a << "\t" << b << std::endl;
		}
	}
std::cout << ishvwf (A.substr (12, 13));
	return 0;
}