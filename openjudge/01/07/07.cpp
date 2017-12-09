#include <string>
#include <iostream>

int main () {

	std::string A;
	// std::cin >> A;
	// 此题有空白字符串
	getline (std::cin, A);
	for (auto a : A) {
		if (a == 'T') {
			std::cout << "A";
		}
		if (a == 'A') {
			std::cout << "T";
		}
		if (a == 'G') {
			std::cout << "C";
		}
		if (a == 'C') {
			std::cout << "G";
		}
	}


	return 0;
}