#include <cstdio>

int main() {


	int m, n;
	scanf("%d%d", &m,&n);
	double all = m;
	for (int a = 0; a < n; a += 1) {
		all *= 1.001;
	}
	
	printf("%.4lf", all);

	return 0;
}