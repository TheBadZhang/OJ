#include <stdio.h>

int main () {

	char str[160];
	int s, e, i;
	while (~scanf ("%s\n%d %d", str, s, e)) {
		for (i = s; i <= e; i ++) {
			printf ("%c", str[i]);
		}
		printf ("\n");
	}

	return 0;
}