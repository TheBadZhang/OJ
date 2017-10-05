#include <cstdio>
#include <cmath>

#define PI 3.14159
int main() {

	double a, b, c, d;
	scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
	printf("%.3lf", sqrt(pow(a-c, 2) + pow(b - d, 2)));

	return 0;
}