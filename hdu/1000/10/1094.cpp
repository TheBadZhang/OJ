#include <iostream>

int main () {

	int T, n, t, sum;
	while (std::cin >> n) {

		sum = 0;
		for (int j = 0; j < n; j++) {
			std::cin >> t;
			sum += t;
		}
		std::cout << sum << std::endl;
	}

	return 0;
}