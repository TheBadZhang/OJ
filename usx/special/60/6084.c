#include <string.h>
#include <stdio.h>

int main () {

	int n, m, k;
	int stu[12][10];
	while (~scanf ("%d %d %d", &n, &m, &k)) {
		int i, j, flag, flag2 = 0, flag3, flag4 = 0, sum = 0, sum2;
		double average;
		for (i = 0; i < n; i++) {\
			for (j = 0; j < m; j++) {
				scanf ("%d", &stu[i][j]);
				if (j == k-1) {
					sum += stu[i][j];
				}
			}
		}
		printf ("%d\n", sum/n);
		for (i = 0; i < n; i++) {
			sum2 = flag3 = flag = 0;
			average = 0.0;
			for (j = 0; j < m; j++) {
				if (stu[i][j] < 60)
					flag ++;
				sum2 += stu[i][j];
			}
			if (flag >= 2) {
				flag2 ++;
				printf ("bad:%d", i+1);
				for (j = 0; j < m; j++) {
					printf (" %d", stu[i][j]);
				}
				printf (" %d", sum2/m);
				printf ("\n");
			}
		}
		if (flag2 == 0) {
			printf ("NO\n");
		}
		for (i = 0; i < n; i++) {
			flag3 = flag = 0;
			average = 0.0;
			for (j = 0; j < m; j++) {
				if (stu[i][j] > 85) {
					flag3 ++;
				}
				average += stu[i][j];
			}
			if (average/(double)m >= 90 || flag3 == m) {
				flag4 ++;
				printf ("good:%d", i+1);
				for (j = 0; j < m; j++) {
					printf (" %d", stu[i][j]);
				}
				printf ("\n");
			}
		}
		if (flag4 == 0) {
			printf ("NO\n");
		}
	}


	return 0;
}