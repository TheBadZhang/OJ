#include <cstdio>


int main() {

	int K;
	scanf("%d", &K);
	while (K >= 10) {
		printf("%d ", K%10);
		K /= 10;
	}
	printf("%d", K%10);



	return 0;
}