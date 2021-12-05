#include <cstdio>

int sum(int n, int m) {
	int s = 0;
	while (n) {
		s += n % m;
		n = n / m;
	}
	return s;
}
int main() {
	int n;
	while (scanf("%d", &n), n) {
		printf(sum(n, 10) == sum(n, 12) && sum(n, 10) == sum(n, 16) ? "%d is a Sky Number.\n" : "%d is not a Sky Number.\n", n);
	}
}