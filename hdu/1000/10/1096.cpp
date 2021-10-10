#include <iostream>

int main () {

	int T, n, t, sum;
	bool flag = false;
	std::cin >> T;
	for (int i = 0; i < T; i ++) {
		std::cin >> n;
		sum = 0;
		for (int j = 0; j < n; j++) {
			std::cin >> t;
			sum += t;
		}
		if (flag) {
			std::cout<< std::endl << sum << std::endl ;
		} else {
			std::cout << sum << std::endl ;
			flag = true;
		}
	}


	return 0;
}