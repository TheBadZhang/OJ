#include <stdio.h>

int gcd (int a, int b) {
	return b?gcd(b,a%b):a;
}

// int gcd (int a, int b) {
// 	while (b^=a^=b^=a%=b);
// 	return x;
// }

int main() {

	int m, n;
	while (~scanf("%d %d", &m, &n)) {
		printf ("%d\n", gcd(m, n));
	}

	return 0;
}