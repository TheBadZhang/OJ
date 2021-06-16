#include <stdio.h>

int m,n,i,j;
int v[200][200] = {0};

int max_min (int ns, int ms) {
	int ii, flag = 1;
	for (ii = 0; ii < m; ii++) {
		if (v[ns][ii] > v[ns][ms]) {
			flag = 0;
		}
	}
	for (ii = 0; ii < n; ii++) {
		if (v[ii][ms] < v[ns][ms]) {
			flag = 0;
		}
	}
	return flag;
}


int main () {
	while (~scanf ("%d %d", &n, &m)) {
		int count = 0;
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				scanf ("%d", &v[i][j]);
			}
		}
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				if (max_min (i, j)) {
					printf ("%d %d %d\n", v[i][j], i, j);
					count ++;
				}
			}
		}
		if (count == 0) {
			printf ("Not\n");
		}
	}


	return 0;
}