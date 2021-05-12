#include <stdio.h>
void swap (int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}
void change (int* l, int n) {
	int min = 0, max = 0, i;
	for (i = 0; i < n; i++) {
		if (l[i] > l[max]) max = i;
		if (l[i] < l[min]) min = i;
	}
	if (max == 0 && min == n-1) {
		swap (&l[max], &l[min]);
	} else if (max == 0) {
		max = min;
		swap (&l[0], &l[min]);
		swap (&l[max], &l[n-1]);
	} else if (min == n-1) {
		min = max;
		swap (&l[max], &l[n-1]);
		swap (&l[0], &l[min]);
	} else {
		swap (&l[max], &l[n-1]);
		swap (&l[0], &l[min]);
	}
}

int main () {

	int l[40];
	int n, i;
	while (~scanf ("%d", &n)) {
		for (i = 0; i < n; i++) {
			scanf ("%d", &l[i]);
		}
		change (l, n);
		for (i = 0; i < n; i++) {
			if (i) printf (" ");
			printf ("%d", l[i]);
		}
		printf ("\n");
	}

	return 0;
}