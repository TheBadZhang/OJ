#include <cstdio>
int main() {
	int t, n, k, a[1000], i, num;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &k);
		for (i = 0; i < n; i++)
			scanf("%d", &a[i]);
		num = 0;
		for (i = 0; i < n; i++)
			if (a[i] > a[k - 1])
				num++;
		printf("%d\n", num);
	}
	return 0;
}