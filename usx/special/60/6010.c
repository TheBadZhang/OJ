#include <stdio.h>

int main () {

	int n;
	while (~scanf ("%d", &n)) {
		if (n%3 == 0 && n%5 == 0) {
			printf ("YES\n");
		} else {
			printf ("NO\n");
		}
	}

	return 0;
}