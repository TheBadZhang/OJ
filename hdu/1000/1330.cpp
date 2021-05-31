#include <cstdio>
double a[100010];
int main() {
	int n;
	a[1] = 0.5;
	for (int i = 2; i <= 100000; i++) {
		a[i] = a[i - 1] + 1.0 / 2 / i;
	}
	printf("# Cards  Overhang\n");
	while (scanf("%d", &n) != EOF) {
		printf("%5d%10.3lf\n", n, a[n]);
	}
	return 0;
}