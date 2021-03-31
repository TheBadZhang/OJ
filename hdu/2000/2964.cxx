#include <cstdio>
#include <cstring>


int dp[] = {1, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
int a[20];	   //系数
__int64 b[20]; //素数乘积


int fun(int n) {
	int i;
	b[0] = dp[0];
	for (i = 1; i < 13; i++)
		b[i] = b[i - 1] * dp[i];
	int t;
	for (i = 0; i < 13; i++) {
		if (b[i] <= n && b[i + 1] > n) {
			t = i;
			break;
		}
	}
	for (i = t; i >= 0; i--) {
		a[i] = n / b[i];
		n %= b[i];
	}
	return t;
}
int main() {

	
	int n, k;
	int j, f;
	while (scanf("%d", &n) != -1 && n) {
		k = fun(n);
		printf("%d = ", n);
		f = 0;
		for (int i = 0; i <= k; i++) {
			if (f == 1) printf(" + ");
			if (a[i] != 0) {
				f = 1;
				printf("%d", a[i]);
				for (j = 1; j <= i; j++)
					printf("*%d", dp[j]);
			} else {
				f = 0;
			}
		}
		printf("\n");
	}
	return 0;
}