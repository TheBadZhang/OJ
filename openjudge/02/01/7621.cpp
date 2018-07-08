#include <iostream>

int main () {

	int n, d = 0;
	std::cin >> n;

	for (int c = 0; c <= n / 5; c += 1) {
		for (int b = 0; b <= (n-5*c) / 2; b += 1) {
			for (int a = 0; a <= (n-5*c-2*b); a += 1) {
				if (5*c + 2*b + a == n) {
					printf ("%03d%12d%12d%12d\n", ++d, a, b, c);
				}
			}
		}
	}

	return 0;
}