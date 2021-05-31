#include <cstdio>
int f(int n) {
	int sum = 0;
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0)
			sum += i;
		if (sum > n)
			break;
	}
	if (sum + 1 > n)
		return 2; //开始忘加1了，，，找了半天错，擦擦擦
	else if (sum + 1 == n)
		return 1;
	else
		return 0;
}
int main() {
	int m, i, k = 0;
	int a[60005];
	while (scanf("%d", &m), m) {
		a[k++] = m;
	}
	printf("PERFECTION OUTPUT\n");
	for (i = 0; i < k; i++) {
		if (f(a[i]) == 1)
			printf("%5d  PERFECT\n", a[i]);
		else if (f(a[i]) == 0)
			printf("%5d  DEFICIENT\n", a[i]);
		else
			printf("%5d  ABUNDANT\n", a[i]);
	}
	printf("END OF OUTPUT\n");
	return 0;
}