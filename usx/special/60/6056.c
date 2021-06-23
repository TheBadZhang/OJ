#include <stdio.h>
#include <string.h>

void substr (char *str, int pos, int length) {
	int i = 0, size = strlen (str);
	for (i = 0; i < length; i++) {
		if (pos+i <= size) {
			putchar (str[pos-1+i]);
		} else {
			break;
		}
	}
	putchar ('\n');
}


int main () {

	char str[160];
	int i, n;
	while (gets (str) != NULL) {
		scanf ("%d %d", &i, &n);
		substr (str, i, n);
		getchar ();
	}

	return 0;
}