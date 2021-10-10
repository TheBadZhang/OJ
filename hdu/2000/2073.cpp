#include <cstdio>
#include <cmath>
double ll(int x, int y) {
	int i, n = x + y;
	double s1 = 0, s2 = 0, l;
	l = (double)sqrt(2);
	for (i = 0; i < n; i++) {  //计算的是没有点的边
		s1 = s1 + sqrt(pow(i, 2) + pow(i + 1, 2));
	}
	for (i = 1; i < n; i++) {  //计算的是有点的边(并且是该点之前的有点的 边)
		s2 = s2 + i * l;
	}
	s2 = s2 + x * l;
	s2 = s2 + s1;
	return s2;
}
int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		while (n--) {
			int x1, y1, x2, y2;
			double sum;
			scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
			sum = fabs(ll(x1, y1) - ll(x2, y2));
			printf("%.3lf\n", sum);
		}
	}
	return 0;
}