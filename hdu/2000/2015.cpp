#include <cstdio>
#include <iostream>
int main () {

	int n, m, r[110] = {2};
	for (int i = 1; i < 110; ++i) {
		r [i] = 2+r[i-1];
	}
	while (std::cin >> n >> m) {
		bool flag = true;
		for (int i = 0; i < n; i+=m) {
			int he = 0, j;
			for (j = i; (j-i) < m && j < n; ++j) {
				he += r[j];
				// printf ("%d:%d  \n", he, r[j]);
			}
			if (flag) {
				printf ("%d", he/(j-i));
				flag = false;
			} else {
				printf (" %d", he/(j-i));
			}
		}
		printf ("\n");
	}


	return 0;
}