#include <stdio.h>

int main () {

	int n, m;
	int s[20][20];
	int a, b;
	while (~scanf("%d%d", &a, &b)) {
		for (n = 0; n < a; n++) {
			for (m = 0; m < b; m++) {
				scanf ("%d", &s[n][m]);
			}
		}
		for (n = 0; n < a; n++) {
			int flag = 0;
			for (m = 0; m < b; m++) {
				if (s[n][m] < 60.0) {
					flag = 1;
				}
			}
			if (flag) {
				printf ("%d", n);
				for (m = 0; m < b; m++) {
					printf (" %d", s[n][m]);
				}
				printf ("\n");
			}
		}

	}

	return 0;
}