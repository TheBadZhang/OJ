#include <stdio.h>

void swap (int** pa, int** pb) {
	int* pt = *pa;
	*pa = *pb;
	*pb = pt;
}

int main () {

	int a, b, c;

	while (~scanf ("%d %d %d", &a, &b, &c)) {
		int *max = &a, *mid = &b, *min = &c;
		if (*max < *mid) swap (&max, &mid);
		if (*max < *min) swap (&max, &min);
		if (*mid < *min) swap (&mid, &min);
		printf ("%d %d %d\n", *max, *mid, *min);
	}

	return 0;
}