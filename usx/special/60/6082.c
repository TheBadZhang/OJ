#include <stdio.h>
#include <stdlib.h>

void swap (int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}

struct element {
	int value;
	int i, j;
} s[225];

int cmp (const void* a, const void* b) {
	// return (((struct element*)a) -> value - ((struct element*)b) -> value) ?
	// 	(((struct element*)a) -> value - ((struct element*)b) -> value) :
	// 	(((struct element*)a) -> i - ((struct element*)b) -> i) ?
	// 	(((struct element*)a) -> i - ((struct element*)b) -> i) :
	// 	(((struct element*)a) -> j - ((struct element*)b) -> j);
	return ((struct element*)a) -> value - ((struct element*)b) -> value;
}
// 这个地方从比较变成 - 之后排序结果就是正确的了

int main () {

	int n;
	int matrix [13][13];
	while (~scanf ("%d", &n)) {
		int i, j;
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				scanf ("%d", &matrix[i][j]);
				s [i*n + j].value = matrix[i][j];
				s [i*n + j].i = i;
				s [i*n + j].j = j;
			}
		}
		qsort (s, n*n, sizeof (struct element), cmp);

		swap (&matrix[s[0].i][s[0].j], &matrix [0][0]);
		swap (&matrix[s[1].i][s[1].j], &matrix [0][n-1]);
		swap (&matrix[s[2].i][s[2].j], &matrix [n-1][0]);
		swap (&matrix[s[3].i][s[3].j], &matrix [n-1][n-1]);
		swap (&matrix[s[n*n-1].i][s[n*n-1].j], &matrix [n/2][n/2]);
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				printf ("%d ", matrix[i][j]);
			}
			printf ("\n");
		}
		printf ("\n");
	}



	return 0;
}