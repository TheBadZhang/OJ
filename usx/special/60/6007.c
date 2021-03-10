#include <stdio.h>
#include <math.h>

#define min(a,b) (a<b?a:b)

int main () {

	int a, b, c, d, e;
	while (~scanf("%d%d%d%d%d", &a, &b, &c, &d, &e)) {
		printf ("%d\n", min(a,min(b,min(c,min(d,e)))));
	}

	return 0;
}