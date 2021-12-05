#include <cstdio>

int main(void) {
	int t;
	long long x;

	scanf("%d", &t);
	while (t--) {
		scanf("%lld", &x);

		int n = 1;
		long long sum = 0;
		while (sum < x) {
			sum += n * n * n;
			n++;
		}
		printf("%d\n", n - 1);
	}

	return 0;
}