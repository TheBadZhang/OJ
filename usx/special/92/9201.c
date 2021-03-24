#include <stdio.h>

int main () {

	int i;
	while (~scanf ("%d", &i)) {
		if (i > 0) {
			printf ("+\n");
		} else {
			printf ("-\n");
		}
	}

	return 0;
}