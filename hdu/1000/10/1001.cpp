#include <iostream>

int main () {

	long long int n;
	bool flag = false;
	while (std::cin >> n) {
			std::cout << (1+n)*n/2 << std::endl << std::endl;
	}

	return 0;
}