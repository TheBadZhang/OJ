#include <stdio.h>
#include <math.h>

int main () {

	float a, b, c, p;
	while (~scanf("%f%f%f", &a, &b, &c)) {
		if (a + b > c && a + c > b && b + c > a) {
			p = (a+b+c)/2.0;
			printf ("%.2f\n", sqrt (p*(p-a)*(p-b)*(p-c)));
		}
	}
	return 0;
}