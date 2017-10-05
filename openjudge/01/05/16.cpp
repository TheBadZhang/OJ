#include <cstdio>

int main() {


	int N;
	double M = 200;
	int year = 1;
	int K;
	scanf("%d%d", &N, &K);
	while (N*year < M) {
		if (year > 20) {
			printf("Impossible");
			return 0;
		}
		M *= 1 + K/100.0;
		year += 1;
	}
	printf("%d", year);


	return 0;
}