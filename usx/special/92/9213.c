#include <stdio.h>

void swap (int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}
int main () {

	int a, b, c, d;
	while (~scanf ("%d %d %d %d", &a, &b, &c, &d)) {
		if (a > b) swap (&a, &b);
		if (a > c) swap (&a, &c);
		if (a > d) swap (&a, &d);
		if (b > c) swap (&b, &c);
		if (b > d) swap (&b, &d);
		if (c > d) swap (&c, &d);
		printf ("%d %d %d %d\n", a, b, c, d);
	}


	return 0;
}