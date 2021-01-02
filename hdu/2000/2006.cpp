#include <iostream>

int main () {


	long long int i, t;
	int n;
	while (std::cin >> n) {
		i = 1;
		for (int j = 0; j < n; j ++) {
			std::cin >> t;
			if (t&0x1) {
				i *= t;
			}
		}
		std::cout << i << std::endl;
	}



	return 0;
}