#include <stdio.h>
#include <string.h>

int main () {

	char str[160];
	int s, n, i;
	while (gets (str) != NULL) {
		scanf ("%d %d\n", &s, &n);
		for (i = 0; i < n; i ++) {
			if (s+i < strlen(str))
			printf ("%c", str[s+i-1]);
		}
		printf ("\n");
	}

	return 0;
}