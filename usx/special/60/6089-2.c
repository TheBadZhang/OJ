#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct {
	char id[20];
	double salary;
} employer;

int cmp (const void* a, const void* b) {
	return strcmp (((employer*)a) -> id, ((employer*)b) -> id);
}

int main () {


	int n, i;
	employer em[100];
	while (~scanf ("%d", &n)) {
		n++;
		for (i=0; i < n; i++) {
			scanf ("%s %lf", em[i].id, &em[i].salary);
		}
		qsort (em, n, sizeof (employer), cmp);
		for (i=0; i < n; i++) {
			printf ("%s %.2lf\n", em[i].id, em[i].salary);
		}
	}


	return 0;
}