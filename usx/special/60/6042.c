#include <stdio.h>

int main () {

	int n;
	int v[25][25] = {0};
	while (~scanf ("%d", &n)) {
		int i,j,c=1;
		for (i = 0; i <= n/2; i++, c+=3*(n-2*i+1)) {
			for (j = i; j < n-i-1; j++, c++) {
				v[j][i] = c;
				v[n-i-1][j] = (n-2*i-1)+c;
				v[n-j-1][n-i-1] = 2*(n-2*i-1)+c;
				v [i][n-j-1] = 3*(n-2*i-1)+c;
			}
		}
		if (n&1) {
			v[n/2][n/2] = n*n;
		}
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				if (j)
					printf ("%4d",v[i][j]);
				else
					printf ("%2d",v[i][j]);
			}
			printf ("\n");
		}
	}



	return 0;
}