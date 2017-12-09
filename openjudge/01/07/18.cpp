#include <iostream>
#include <string>

int main () {

	std::string A, B;
	getline (std::cin, A);
	getline (std::cin, B);
	if (A.size () > B.size ()) {
		if (A.find (B) == std::string::npos) {
			std::cout << "No substring";
		} else if (A.find (B) != std::string::npos) {
			std::cout << B << " is substring of " << A;
		}
	} else if (B.size () > A.size ()) {
		if (B.find (A) == std::string::npos) {
			std::cout << "No substring";
		}
		else if (B.find (A) != std::string::npos) {
			std::cout << A << " is substring of " << B;
		}
	} else {
		if (A == B) {
			std::cout << B << " is substring of " << A;
		} else {
			std::cout << "No substring";
		}
	}

	return 0;
}