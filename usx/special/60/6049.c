#include <stdio.h>

int m,n,i,j;
int v[200][200] = {0};

int max (int ms) {
	int ii, max = 0;
	for (ii = 0; ii < n; ii++) {
		if (v[ms][ii] > v[ms][max]) {
			max = ii;
		}
	}
	return max;
}

int min (int ns) {
	int ii, min = 0;
	for (ii = 0; ii < m; ii++) {
		if (v[ii][ns] < v[min][ns]) {
			min = ii;
		}
	}
	return min;
}

int isAn (int ms, int ns) {
	if (min(ns) == ms && max(ms) == ns) return 1;
	else return 0;
}

int main () {
	while (~scanf ("%d %d", &m, &n)) {
		int count = 0;
		for (i = 0; i < m; i++) {
			for (j = 0; j < n; j++) {
				scanf ("%d", &v[i][j]);
			}
		}
		for (i = 0; i < m; i++) {
			for (j = 0; j < n; j++) {
				if (isAn (i, j)) {
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