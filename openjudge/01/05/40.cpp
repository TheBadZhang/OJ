#include <cstdio>

int main() {

	int n;
	scanf("%d", &n);
	int times = 0;
	for (int b = 1; b <= n; b += 1) {
		int a = b;
		while (a > 0) {
			if (a%10 == 1) {
				times += 1;
			}
			a /= 10;
		}
	}

	printf("%d", times);

	return 0;
}