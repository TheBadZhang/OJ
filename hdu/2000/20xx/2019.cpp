#include <iostream>
#include <cstdio>

int main () {

	int n, m, x;
	while (std::cin >> n >> m && (n||m)) {
		bool flag = false, flag2 = true;
		for (int i = 0; i < n; ++i) {
			scanf ("%d", &x);
			if (flag) {
				printf (" ");
			} else {
				flag = true;
			}
			if (x >= m && flag2) {
				printf ("%d ", m);
				flag2 = false;
			}
			printf ("%d", x);
		}
		if (flag2) {
			printf (" %d\n", m);
		} else {
			printf ("\n");
		}
	}
	return 0;
}