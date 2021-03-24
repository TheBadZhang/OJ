#include <stdio.h>

int main () {

	int a, b, c, d;
	scanf ("%d %d %d %d", &a, &b, &c, &d);
	printf ("%.2f\n%.2f", 1.0/(1.0/a+1.0/b),
		1.0/(1.0/a+1.0/b+1.0/c+1.0/d));

	return 0;
}