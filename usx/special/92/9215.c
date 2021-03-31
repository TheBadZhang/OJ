#include <stdio.h>

int isTriangle (double a, double b, double c) {
	if (a+c <= b || a+b <= c || b+c <= a) {
		return 0;
	} else {
		return 1;
	}
}

int main () {

	double a, b, c;
	while (~scanf ("%lf %lf %lf", &a, &b, &c)) {
		if (isTriangle (a, b, c)) {
			if (a == b && b == c) {
				printf ("equilateral triangle\n");
			} else if (a == b || a == c || b == c) {
				printf ("isosceles triangle\n");
			} else {
				printf ("scalene triangle\n");
			}
		} else {
			printf ("not triangle\n");
		}
	}




	return 0;
}