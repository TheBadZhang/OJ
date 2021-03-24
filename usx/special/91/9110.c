#include <stdio.h>

int main () {

	int a = 50, b = 43, c = 13;
	// scanf ("%d %d %d", &a, &b, &c);

	b += a/3;
	c += a/3;
	a = a/3+a%3;

	a += b/3;
	c += b/3;
	b = b/3+b%3;

	a += c/3;
	b += c/3;
	c = c/3+c%3;

	printf ("%d %d %d", a, b, c);

	return 0;
}