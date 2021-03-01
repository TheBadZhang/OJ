#include <cstdio>

int main () {

	int n;
	int r [32] = {1};
	for (int i = 1; i < 32; ++i) {
		r[i]=2*(r[i-1]+1);
	}
	while (~scanf ("%d", &n)) {
		printf ("%d\n", r[n-1]);
	}

	return 0;
}