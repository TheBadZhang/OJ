#include <cstdio>
#include <cmath>

int main() {

	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	double d = b*b - 4*a*c;
	if (d > 0) {
		double dl = sqrt(d);
		double x1 = (-b+dl)/(2*a);
		double x2 = (-b-dl)/(2*a);
		// if (x1 > x2) {
			printf("x1=%.5lf;x2=%.5lf", x1, x2);
		// } else printf("x1=%.5lf;x2=%.5lf", x2, x1);
	} else if (d < 0) {
		double r  = -b / (2*a);
		double ur = sqrt(-d)/(2*a);
		if (r == -0.00000) {
			r=0;
		}
		printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi", r,ur,r,ur);
	} else if (d == 0) {
		printf("x1=x2=%.5lf", (-b)/(2*a));
	}
	

	return 0;
}