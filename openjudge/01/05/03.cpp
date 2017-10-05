#include <cstdio>

int main() {


	int n;
	scanf("%d", &n);
	double *list = new double[n];
	double all = 0;
	for (int a = 0; a < n; a += 1) {
		scanf("%lf", &list[a]);
		all += list[a];
	}
	printf("%.4lf", all/n);


	return 0;
}