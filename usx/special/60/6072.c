#include <stdio.h>

void swap (int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}

void reverse (int* l, int ns, int n) {
	int i;
	for (i = 0; i < n/2; i++) {
		swap (&l[ns+i-1], &l[ns+n-2-i]);
	}
}


int main () {

	int n, i;
	int arr [25];
	int n1, n2;
	while (~scanf ("%d", &n)) {
		for (i = 0; i < n; i++) {
			scanf ("%d", &arr[i]);
		}
		scanf ("%d %d", &n1, &n2);
		reverse (arr, n1, n2);
		for (i = 0; i < n; i++) {
			if (i) putchar (' ');
			printf ("%d", arr[i]);
		}
		printf ("\n");
	}

	return 0;
}