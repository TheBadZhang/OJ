#include <stdio.h>

int main () {

	int m, n, i, j;
	int maxi, maxj;
	int v [22][22];
	while (~scanf ("%d %d", &m, &n)) {
		maxi = maxj = 0;
		for (i = 0; i < m; i ++) {
			for (j = 0; j < n; j ++) {
				scanf ("%d", &v[i][j]);
				if (v[i][j] > v[maxi][maxj]) {
					maxi = i;
					maxj = j;
				}
			}
		}
		printf ("%d %d %d\n", maxi+1, maxj+1, v[maxi][maxj]);
	}

	return 0;
}