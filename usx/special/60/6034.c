#include <stdio.h>
#include <string.h>

int main () {

	char n[7], s, i;
	while (~scanf ("%s", n)) {
		s = strlen (n);
		printf ("%d", s);
		for (i = 0; i < s; i++) {
			printf (" %c", n[i]);
		}
		printf (" ");
		for (i = s-1; i >= 0; i--) {
			printf ("%c",n[i]);
		}
		printf ("\n");
	}
	return 0;
}