#include <stdio.h>


int main () {

	int T, m, n, i, mini;
	scanf ("%d", &T);
	while (T--) {
		scanf ("%d %d %d", &m, &n, &i);
		printf ("%d %d\n", n+i*m, i);
	}

	return 0;
}