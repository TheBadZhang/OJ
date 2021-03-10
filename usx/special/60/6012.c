#include <stdio.h>
#include <math.h>

// #define min(a,b) (a<b?a:b)
// #define max(a,b) (a<b?b:a)

float min (float a, float b) {
	return a > b ? b : a;
}
float max (float a, float b) {
	return a < b ? b : a;
}

int main () {

	float a, b, c, d, e;
	while (~scanf("%f%f%f%f%f", &a, &b, &c, &d, &e)) {
		printf ("%.6f %.6f\n",
			max(a,max(b,max(c,max(d,e)))),
			min(a,min(b,min(c,min(d,e))))
		);
	}

	return 0;
}