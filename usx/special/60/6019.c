#include <stdio.h>

int main () {

	int d, z, x;
	for (d = 0; d <= 100/3; d ++) {
		for (z = 0; z <= (100-3*d)/2; z ++) {
			for (x = 0; x <= 2*(100-3*d-2*z); x += 2) {
				if (3*d + 2*z + x/2 == 100 && 100 == d + z + x) {
					printf ("%d %d %d\n", d, z, x);
				}
			}
		}
	}

	return 0;
}