#include <iostream>

int main () {

	int n, max = -1;
	std::cin >> n;


	for (int a = n; a >= 0; a -= 1) {
		for (int b = n; b >= 0; b -= 1) {
			for (int c = n; c >= 0; c -= 1) {
				if ((a+b)%2 == 0 && (b+c)%3 == 0 && (a+b+c)%5 == 0) {
					if ((a+b+c) > max) max = a+b+c;
				} else continue;
			}
		}
	}

	std::cout << max;



	return 0;
}