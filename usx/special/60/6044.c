#include <stdio.h>

int search (int* list, int size, int d) {
	int i = 0;
	for (; i < size; i ++) {
		if (list [i] > d) {
			break;
		}
	}
	return i;
}

void moveRight (int* list, int size, int pos) {
	int i = size;
	for (; i > pos; i--) {
		list [i] = list [i-1];
	}
}

void insert (int* list, int size, int i) {
	int pos = search (list, size, i);
	moveRight (list, size, pos);
	list [pos] = i;

}

void insertSort (int* list, int size) {
	int i, t;
	for (i = 1; i < size; i ++) {
		t = list [i];
		insert (list, i, t);
	}
}

void print (int* list, int size) {
	int i;
	for (i = 0; i < size; i ++) {
		printf ("%3d", list [i]);
	}
	printf ("\n");
}
int main () {

	int list [100];
	int n, i;
	while (~scanf ("%d", &n)) {
		for (i = 0; i < n; i++) {
			scanf ("%d", &list [i]);
		}
		// print  (list, n);
		insertSort (list, n);
		print  (list, n);
		scanf  ("%d", &i);
		insert (list, n, i);
		print  (list, n+1);
	}



	return 0;
}