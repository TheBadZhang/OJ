#include <stdio.h>


int main () {

	int T, m, n, i, mini;
	scanf ("%d", &T);
	while (T--) {
		scanf ("%d %d", &m, &n);
		mini = m>n ? n : m;
		for (i = 1; i <= mini; i++) {
			if (n%i == 0 && m%i == 0) {
				if (i != 1) printf (" ");
				printf ("%d", i);
			}
		}
		printf ("\n");
	}

	return 0;
}