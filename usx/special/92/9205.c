#include <stdio.h>

int main () {

	int a;
	while (~scanf ("%d", &a)) {
		if (a%2) {
			printf ("odd\n");
		} else {
			printf ("even\n");
		}
	}


	return 0;
}