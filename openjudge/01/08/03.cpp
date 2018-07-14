#include <iostream>

int main () {

	int m, n, r = 0, t;
	std::cin >> m >> n;
	for (int a = 0; a < m; a ++)
		for (int b = 0; b < n; b ++) {
			std::cin >> t;
			if (a == 0 || a == m-1 ||
			    b == 0 || b == n-1)
				r += t;
		}
	std::cout << r;

	return 0;
}