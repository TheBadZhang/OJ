#include <iostream>

int main () {

	int a, b, c, x = 0, y, d = 0;

	std::cin >> a >> b >> c;

	for (;; x++) {
		y = (c - a * x) / b;
		if (y < 0) break;
		if (a * x + b * y == c) d ++;
		
	}

	std::cout << d;

	return 0;
}