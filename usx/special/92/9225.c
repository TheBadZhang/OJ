#include <stdio.h>

int gcd (int m, int n) {
	return n?gcd(n,m%n):m;
}

int main () {

	int T, m, n, i, mini;
	scanf ("%d", &T);
	while (T--) {
		scanf ("%d %d", &m, &n);
		mini = gcd (m, n);
		m /= mini;  // 计算最大公约数
		n /= mini;  // 计算
		if (m%n == 0) { // 可以约成整数
			printf ("%d\n", m/n);
		} else {        // 不能约成整数
			if (m > n) {// 如果分子大于分母
				printf ("%d %d %d\n", m/n, m%n, n);
				        // 输出假分数
			} else {
				printf ("%d %d\n", m, n);
				        // 输出普通分数
			}
		}

	}

	return 0;
}