#include <iostream>

bool isPrim (int i) {
	if (i % 2 == 0) {
		return false;
	} else {
		for (int j = 3; j < (i>>1); j+=2) {
			if (i % j == 0) {
				return false;
			}
		}
		return true;
	}
}

int main () {
	bool r [100] = {0};
	bool is [100][100] = {0};
	for (int i = -39; i <= 50; ++i) {
		if (isPrim(i*i+i+41)) {
			r [i+39] = true;
		} else {
			r [i+39] = false;
		}
	}
	for (int i = -39; i <= 50; ++i) {
		for (int j = -39; j <= 50; ++j) {
			bool flag = true;
			for (int k = i; k <= j; ++k) {
				if (!r[k+39]) {
					flag = false;
					break;
				}
			}
			is [i+39][j+39] = flag;
		}
	}
	int x, y;
	while (~scanf ("%d %d", &x, &y) && (x||y)) {
		if (is[x+39][y+39]) {
			printf ("OK\n");
		} else {
			printf ("Sorry\n");
		}
	}



	return 0;
}