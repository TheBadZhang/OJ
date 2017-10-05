#include <cstdio>

int main() {

	int p, w;
	int n;
	scanf("%d", &n);
	scanf("%d%d", &p, &w);
	double pw = w / (double)p;
	int *list = new int[n];
	for (int a = 0; a < n-1; a += 1) {
		int d, f;
		scanf("%d%d", &d, &f);
		double df = f / (double)d;
		if (df - pw > 0.05) {
			printf("better\n");
		} else if (pw - df > 0.05) {
			printf("worse\n");
		} else printf("same\n");
	}


	return 0;
}