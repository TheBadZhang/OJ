#include <iostream>

int main () {

	int n, m;
	unsigned long long int r [44] = { 1, 1, 2 };
	for (int i = 3; i < 44; i++) {
		r [i] = r[i-1] + r[i-2];
	}
	std::cin >> n;
	while (n--) {
		std::cin >> m;
		std::cout << r[m-1] << std::endl;
	}

	return 0;
}