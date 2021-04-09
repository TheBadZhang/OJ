#include <stdio.h>

int main () {

	int m[21][21];
	int n, i, j;
	while (~scanf ("%d", &n)) {
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				scanf ("%d", &m[j][i]);
			}
		}
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				printf ("%3d", m[i][j]);
			}
			printf ("\n");
		}
	}

	return 0;
}