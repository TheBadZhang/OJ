#include <stdio.h>

int main () {

	int n, i;
	char name[80];
	double value;
	while (~scanf ("%d\n", &n)) {
		for (i = 0; i < n; i++) {
			scanf ("%s %lf", name, &value);
			printf ("%s %.2lf\n", name, value);
		}
	}

	return 0;
}