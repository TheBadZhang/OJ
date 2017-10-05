#include <cstdio>
#include <cmath>

int main() {

	double He = 0.0;
	int n;
	scanf("%d", &n);


	for (int a = 1; a <= n; a += 1) {
		if (a%2 != 0) {
			He += 1.0 / (double)a;
		} else {
			He -= 1.0 / (double)a;
		}
	}


	printf("%.4lf", He);


	return 0;
}