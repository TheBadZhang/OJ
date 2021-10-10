#include <cstdio>
#include <cmath>

// Eratosthenes筛选法
void sieveofe(int p[], int n) {
	int i, j;

	p[0] = 0;
	p[1] = 0;
	p[2] = 1;

	// 初始化
	for (i = 3; i <= n; i++) {
		p[i++] = 1;
		p[i] = 0;
	}
	int max = sqrt(n);
	for (i = 3; i <= max; i++) {
		if (p[i]) {
			for (j = i + i; j < n; j += i)	//进行筛选
				p[j] = 0;
		}
	}
}

#define MAX 10000

int main(void) {
	int p[MAX + 1];
	int sum, count, i;

	sieveofe(p, MAX);

	for (;;) {
		scanf("%d", &sum);
		if (sum == 0)
			break;

		count = 0;
		for (i = 2; i <= sum / 2; i++) {
			if (p[i] && p[sum - i])
				if (i != sum - i)
					count++;
		}

		printf("%d\n", count);
	}

	return 0;
}