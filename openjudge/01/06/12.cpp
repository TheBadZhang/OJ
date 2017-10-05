#include <cstdio>

int main () {

	char *R = new char [1000];
	for (int a = 0; a < 1000; a += 1) {
		R [a] = 0;
	}

	R [1000 - 1] = 1;
	int n;
	scanf ("%d", &n);
	for (int a = 0; a < n; a += 1) {
		for (int b = 1000 - 1; b >= 0; b -= 1) {
			R [b] *= 2;
		}
		for (int b = 1000 - 1; b >= 0; b -= 1) {
			if (R [b] >= 10) {
				R [b-1] += R [b] / 10;
				R [b] %= 10;
			}
		}
	}

	bool flag = false;
	for (int a = 0; a < 1000; a += 1) {
		if (!flag && R [a] != 0) {
			flag = true;
		}
		if (flag) {
			printf ("%d", R [a]);
		}
	}

	return 0;
}