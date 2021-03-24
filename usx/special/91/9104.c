#include <stdio.h>

int main () {

	float a, b, h;
	scanf ("%f %f %f", &a, &b, &h);
	printf ("%.2f", (a+b)*h/2);

	return 0;
}