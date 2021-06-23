#include <stdio.h>

int main () {

	int n, m;
	double s[11][8];
	int a, b;
	while (~scanf("%d%d", &a, &b)) {
		double sum = 0;
		int maxn = 0, maxm = 1;
		for (n = 0; n < a; n++) {
			scanf ("%lf", &s[n][0]);
			for (m = 1; m < b+1; m++) {
				scanf ("%lf", &s[n][m]);
				if (s[n][m] > s[maxn][maxm]) {
					maxn = n;
					maxm = m;
				}
				sum += s[n][m];
			}
		}
		printf ("%.0lf %d\n", s[maxn][0], maxm);
		for (n = 0; n < a; n++) {
			int flag = 0;
			for (m = 1; m < b+1; m++) {
				if (s[n][m] < 60.0) {
					flag = 1;
				}
			}
			if (flag) {
				printf ("%.0lf", s[n][0]);
				for (m = 1; m < b+1; m++) {
					printf (" %.1lf", s[n][m]);
				}
				printf ("\n");
			}
		}
		printf ("%.2lf\n", sum/(a*b));

	}




	return 0;
}