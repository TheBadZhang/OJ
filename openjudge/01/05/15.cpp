#include <cstdio>

int main() {


	int r,m, n;
	scanf("%d%d%d", &r,&m,&n);
	double all = m;
	for (int a = 0; a < n; a += 1) {
		all *= 1.0+(r/100.0);
	}
	
	printf("%d", (int)all);

	return 0;
}
