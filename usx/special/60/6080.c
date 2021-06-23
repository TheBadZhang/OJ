#include <stdio.h>
#include <string.h>

void substr (char *str, int pos) {
	int i = 0, size = strlen (str);
	for (i = 0; i < size; i++) {
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
	int i;
	while (gets (str) != NULL) {
		scanf ("%d", &i);
		substr (str, i);
		getchar ();
	}

	return 0;
}