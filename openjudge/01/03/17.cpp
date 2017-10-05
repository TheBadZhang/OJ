#include <cstdio>
#include <cmath>

#define PI 3.14159
double linel(double a, double b, double c, double d) {
	return pow(pow(a-c, 2)+pow(b-d, 2), 0.5);
}

int main() {

	double a, b, c, d, e, f;
	scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f);
	double sa = linel(a, b, c, d);
	double sb = linel(a, b, e, f);
	double sc = linel(c, d, e, f);
	double s  = (sa+sb+sc) / 2;
	printf("%.2lf", sqrt(s*(s-sa)*(s-sb)*(s-sc)));

	return 0;
}