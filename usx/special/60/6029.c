#include <stdio.h>

double abs (double x) {
	if (x < 0) return -x;
	else return x;
}

double sqrt (double x) {
	double xn = 1, a = x;
	while (abs(xn-(xn+a/xn)/2.0) >= 1e-7) {
		// 1e-5 所计算得到的精度并不能满足题目的要求，所以我直接拉了两个量级
		xn = (xn+a/xn)/2.0;
	}
	return xn;
}

int main () {

	double n;
	while (~scanf("%lf", &n)) {
		printf ("%.6lf\n", sqrt (n));
	}

	return 0;
}