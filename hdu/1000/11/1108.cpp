#include <iostream>

unsigned long long int gcd (unsigned long long int a, unsigned long long int b) {
	return a%b?gcd(b,a%b):b;
}

int main () {
	unsigned long long int a, b;
	while (std::cin >> a >> b) {
		// printf ("%lld  %lld\n", gcd(a,b), ((a*b)/gcd(a,b)));
		printf ("%lld\n", ((a*b)/gcd(a,b)));
	}
}