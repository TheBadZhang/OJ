#include <iostream>

int gcd (int m, int n) {
	return (n == 0) ? m : gcd (n, m%n);
}
int lcm (int m, int n) {
	return m * n / gcd (m, n);
}

int main () {

	int G, L;
	std::cin >> G >> L;
	for (int a = G; a <= L; a += 1) {
		for (int b = G; b <= L; b += 1) {
			if (gcd (a, b) == G &&
			    lcm (a, b) == L) {
					std::cout << a+b;
					return 0;
				}
		}
	}
}