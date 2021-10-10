//根据题意列出公式计算即可
#include <cstdio>
#include <cstring>
int main() {
	int t;
	double y, q, e, f, g;
	scanf("%d", &t);
	while (t--) {
		scanf("%lf%lf%lf%lf%lf", &y, &q, &e, &f, &g);
		printf("%.1lf\n%.1lf\n", y * (1 + e / 100 * q / 365) * (1 + g / 100), y * (1 + f / 100 * (q + 365) / 365));
	}
	return 0;
}