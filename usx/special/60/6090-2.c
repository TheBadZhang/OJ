#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct {
	char id[20];
	double salary;
} employer;

int main () {


	int n, i;
	char id[20];
	employer em[100];
	while (~scanf ("%d", &n)) {
		for (i=0; i < n; i++) {
			scanf ("%s %lf", em[i].id, &em[i].salary);
		}
		scanf ("%s", id);
		for (i=0; i < n; i++) {
			if (strcmp (em[i].id, id) != 0)
				printf ("%s %.2lf\n", em[i].id, em[i].salary);
		}
	}


	return 0;
}