#include <stdio.h>
#include <math.h>   // pow 函数

int main () {

	double x, y, z;
	int n;
	printf ("请输入 本金 年利率 年数\n");
	scanf ("%lf %lf %d", &x, &y, &n);
	z = x*pow(1+y, n);    // x*(1+y)^n;
	printf ("%d年后，%.4lf本金 %.4lf"
	" 利率，最终获得 %.4lf", n, x, y, z);

	return 0;
}