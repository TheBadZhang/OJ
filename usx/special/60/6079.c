#include <stdio.h>

int main () {

	int l[22] = {0};
	int n, m, i, j;
	while (~scanf ("%d %d", &n, &m)) {
		for (i = 0; i < n; i++) {
			scanf ("%d", &l[(i+m)%n]);
		}
		for (i = 0; i < n; i ++) {
			if (i) printf (" ");
			printf ("%d", l[i]);
		}
		printf ("\n");
	}

	return 0;
}