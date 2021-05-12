#include <stdio.h>

int gcd (int m, int n) {
	return m%n?gcd(n,m%n):n;
}
int lcm (int m, int n) {
	return m*n/gcd(m,n);
}
int main () {

	int n, m;
	while (~scanf ("%d %d", &n, &m)) {
		printf ("%d %d\n", gcd (m,n), lcm(m,n));
	}
	return 0;
}