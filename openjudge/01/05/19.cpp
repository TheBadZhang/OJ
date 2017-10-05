#include <cstdio>
#include <cmath>

int main() {

	int n;
	float times = 0;
	scanf("%d", &n);
	for (int a = 0; a < n; a += 1) {
		double x, y;
		int p;
		scanf("%lf%lf%d", &x, &y, &p);
		times += 1.5 * p + sqrt(x*x+y*y) / 25.0;
		// printf("%lf\t%lf", sqrt(x*x+y*y), times);
	}

	printf("%.0lf", ceil(times));


	return 0;
}