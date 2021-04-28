#include <stdio.h>
#include <stdlib.h>

int comp(const void* a, const void* b) {
	return *(int*)a - *(int*)b;
}

void swap (int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}

void bubbleSort (int* list, int size) {
	int i, j;
	for (i = 0; i < size; i ++) {
		for (j = i+1; j < size; j++) {
			if (list[i] > list[j]) {      // 大的数字向上冒
				swap (&list[i], &list[j]);
				/* int t = list[i];
				** list [i] = list [j];
				** list [j] = t;
				*/
			}
		}
	}
}

int main () {

	int i, n, a[50];
	while (~scanf ("%d", &n)) {
		for (i = 0; i < n; i++) {
			scanf ("%d", &a[i]);
		}
		// qsort (a, n, sizeof(int), comp);
		bubbleSort (a, n);
		printf ("%d", a[0]);
		for (i = 1; i < n; i++) {
			printf (" %d", a[i]);
		}
		printf ("\n");
	}

	return 0;
}