#include <cstdio>
#include <climits>

int main(void) {
	int t, n, m, a, i;

	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &m);

		int min = INT_MAX;
		for (i = 1; i <= n; i++) {
			scanf("%d", &a);

			if (a < min)
				min = a;
		}

		printf("%d\n", (100 - min) * (100 - min));
	}

	return 0;
}
