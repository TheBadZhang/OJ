#include <stdio.h>
#include <math.h>

int main () {

	int x1, y1, x2, y2;
	while (~scanf ("%d %d %d %d", &x1, &y1, &x2, &y2)) {
		printf ("%d\n", abs(x2-x1)*abs(y2-y1));
	}

	return 0;
}