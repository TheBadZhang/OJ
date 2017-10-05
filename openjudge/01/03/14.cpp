#include <cstdio>
#include <cmath>

#define PI 3.14159
int main() {

	double r, h;
	scanf("%lf%lf", &h, &r);
	printf("%.0lf", ceil(20/((PI*(r*r)*h)/1000)));

	return 0;
}