#include <iostream>
#include <cstdio>

int main () {

	int n, r[110], min, minj;
	while (~scanf ("%d", &n) && n) {
		min = INT_MAX;
		minj = 0;
		for (int i = 0; i < n; ++i) {
			scanf ("%d", &r[i]);
			if (r[i] < min) {
				minj = i;
				min = r[i];
			}
		}
		r[minj]=r[0];
		r[0]=min;
		bool flag = true;
		for (int i = 0; i < n; ++i) {
			if (flag) {
				printf ("%d", r[i]);
				flag = false;
			} else {
				printf (" %d", r[i]);
			}
		}
		printf ("\n");
	}


	return 0;
}