#include <iostream>

int main () {

	int n;
	while (std::cin >> n) {
		if (n > 100 || n < 0) {
			std::cout << "Score is error!";
		} else if (n >= 90) {
			std::cout << "A";
		} else if (n >= 80) {
			std::cout << "B";
		} else if (n >= 70) {
			std::cout << "C";
		} else if (n >= 60) {
			std::cout << "D";
		} else {
			std::cout << "E";
		}
		std::cout << std::endl;
	}



	return 0;
}