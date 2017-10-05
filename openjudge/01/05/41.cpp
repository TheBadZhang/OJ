#include <cstdio>

int main() {

	int n, c;
	scanf("%d%d", &c, &n);
	int times = 0;
	for (int b = c; b <= n; b += 1) {
		int a = b;
		while (a > 0) {
			if (a%10 == 2) {
				times += 1;
			}
			a /= 10;
		}
	}

	printf("%d", times);

	return 0;
}