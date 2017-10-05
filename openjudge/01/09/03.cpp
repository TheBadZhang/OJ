#include <cstdio>

int 
main () {

	int max = 0, b = 0;
	for (int a = 0; a < 7; a += 1) {
		int z, x;
		scanf ("%d%d", &z, &x);
		if (z + x > max) {
			max = z + x;
			b = a+1;
		}
	}
	printf ("%d", b);

	return 0;
}