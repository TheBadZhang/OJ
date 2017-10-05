#include <cstdio>
#include <cmath>

int main () {

	int a, b, c, d;
	double pool = 0;
	scanf ("%d%d%d%d", &a, &b, &c, &d);
	printf ("%.2lf", 4.0/(double)((double)((double)(b-a)*c*d+(double)(d-c)*a*b)/(double)(a * b * c *d)));


	return 0;
}