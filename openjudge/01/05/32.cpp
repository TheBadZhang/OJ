#include <cstdio>

int main() {

	double He = 0.0;
	int n;
	scanf("%d", &n);

	// q_i = q_i-1 + q_i-2
	// n_1 = q_1 / q_0
	// q_0 = 1
	long long int *list = new long long int[n+2];
	list[0] = 1;
	list[1] = 2;
	for (int a = 1; a <= n; a += 1) {

		He += (double)list[a] / (double)list[a-1];
		list[a+1] = list[a] + list[a-1];
	}

	printf("%.4lf", He);


	return 0;
}