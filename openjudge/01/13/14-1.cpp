#include <iostream>
#include <cmath>

int main () {

	int n;
	std::cin >> n;
	for (int a = 100; a <= 999; a += 1) {
		if (a == pow ((int)sqrt (a), 2)) {
			int g = a % 10, s = a / 10 % 10, b = a / 100;
			if (g == s || g == b || s == b) {
				n -= 1;
				if (n == 0) {
					std::cout << a;
					return 0;
				}
			}
		} else continue;

	}

	return 0;
}