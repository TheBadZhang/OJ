#include <iostream>

typedef unsigned long long ull;

ull
gcd (ull a, ull b) {
	return b == 0 ? a : gcd (b, a % b);
}


int main () {

	ull a, b;
	std::cin >> a >> b;

	std::cout << gcd (a, b);

	return 0;
}