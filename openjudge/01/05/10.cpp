#include <cstdio>

int main() {


	int m, n;
	scanf("%d%d", &m, &n);

	int all = 0;
	for (int a = m; a <= n; a += 1) {
		if (a%17 == 0) {
			all += a;
		}
	}

	printf("%d", all);

	return 0;
}