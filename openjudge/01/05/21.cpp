#include <cstdio>

int main() {

	unsigned long long int N;
	scanf("%lld", &N);

	while (N != 1) {
		if (N%2 != 0) {
			printf("%lld*3+1=%lld\n", N, N*3 + 1);
			N = N*3 + 1;
		} else {
			printf("%lld/2=%lld\n", N, N/2);
			N /= 2;
		}
	}
	printf("End");


	return 0;
}