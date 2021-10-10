
//该题数学模型就是从N个里面选出M个东西。公式C(N, M) = C(N-1, M-1) + C(N-1, M) 。
#include <cstdio>
#include <cstring>
int c[2001][2001];
int main() {
	int t, n, m, i, j;
	memset(c, 0, sizeof(c));
	for (i = 1; i < 2001; i++)
		c[i][0] = 1;
	c[1][1] = 1;
	for (i = 2; i < 2001; i++)
		for (j = 1; j <= i; j++)
			c[i][j] = (c[i - 1][j - 1] + c[i - 1][j]) % 1007;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &m, &n);
		printf("%d\n", c[n][m]);
	}
	return 0;
}