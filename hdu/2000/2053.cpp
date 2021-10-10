#include <cstdio>
#include <cmath>
int a, n, i, j;
int yue(int n) {
	int cnt = 2;
	int sq = floor(sqrt(n * 1.0) + 0.5);
	for (i = 2; i < sq; i++) {
		if (n % i == 0)
			cnt += 2;
	}
	if (sq * sq == n) --cnt;
	return cnt;
}
int main() {
	while (~scanf("%d", &a)) {
		i = yue(a);
		if (i % 2 == 0)
			printf("0\n");
		else
			printf("1\n");
	}
	return 0;
}