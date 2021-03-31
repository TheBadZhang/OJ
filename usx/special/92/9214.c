#include <stdio.h>

int main () {

	int a, b;
	char o;
	while (~scanf ("%d %d\n%c", &a, &b, &o)) {
		switch (o) {
			case '+': printf ("%d+%d=%d\n", a, b, a+b); break;
			case '-': printf ("%d-%d=%d\n", a, b, a-b); break;
			case '*': printf ("%d*%d=%d\n", a, b, a*b); break;
			case '/': printf ("%d/%d=%.2f\n", a, b, (double)a/(double)b); break;
		}
	}



	return 0;
}