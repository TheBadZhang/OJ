#include <cstdio>

int main() {
	int n, x, round;
	while (scanf("%d", &n) != EOF) {
		if (n % 2 == 0 || n == 1) {
			printf("2^? mod %d = 1\n", n);
		} else {
			x = 1, round = 2;
			while (round != 1) {
				round = round * 2 % n;
				++x;
			}
			printf("2^%d mod %d = 1\n", x, n);
		}
	}
}