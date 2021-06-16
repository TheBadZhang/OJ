#include <stdio.h>

int main () {

	int n, nn;
	scanf ("%d", &n);
	int max, min, sum;
	int i, ii, j;
	for (i = 0; i < n; i++) {
		scanf ("%d", &nn);
		sum = 0;
		for (j = 0; j < nn; j++) {
			scanf ("%d", &ii);
			if (j == 0) {
				max = min = ii;
			}
			sum += ii;
			if (max < ii) max = ii;
			if (min > ii) min = ii;
		}
		printf ("%d %d %d\n", max, min, sum/nn);
	}




	return 0;
}