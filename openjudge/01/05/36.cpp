#include <cstdio>
#include <cmath>

int main() {

	int n;
	double x;
	scanf("%lf%d", &x, &n);

	double result = 0;
	for (int a = n; a >= 0; a -= 1) {

		result += pow(x, a);
	}

	printf("%.2lf", result);


	return 0;
}