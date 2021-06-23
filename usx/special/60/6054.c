#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp (const void* a, const void* b) {
	return strcmp ((char*)a, (char*)b);
}

int main() {

	int n;
	char c[20][20];
	while (~scanf("%d\n", &n)) {
		int i;
		for (i = 0; i < n; i++) {
			gets(c[i]);
		// getchar ();
		}
		qsort (c, n, sizeof (char[20]), cmp);
		for (i = 0; i < n; i++) {
			printf ("%s\n", c[i]);
		}
	}


	return 0;
}