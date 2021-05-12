#include <stdio.h>

int main () {

	int n, a[50], i;
	while (~scanf ("%d",&n)) {
		for (i = 0; i < n; i++) {
			scanf ("%d", &a[i]);
		}
		for (i = 0; i < n; i++) {
			printf ("%3d", a[n-i-1]);
		}
		printf ("\n");
	}


	return 0;
}