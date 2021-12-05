#include <cstdio>
double a[50010];
int main() {
	int n;
	double num = 0;
	a[1] = 1.0;
	for (int i = 2; i <= 50000; i++) {
		num += 2.0 / i;
		a[i] = a[i - 1] + num + 1;
	}
	while (scanf("%d", &n) != EOF && n) {
		printf("%.2f\n", a[n]);
	}
	return 0;
}