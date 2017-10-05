#include <cstdio>

int main() {



	int n, num = 0;
	scanf("%d", &n);

	for (int a = 0; a < n; a += 1) {
		int number;
		scanf("%d", &number);
		if (number%10-number/1000 - number/100%10 - number/10%10 > 0) {
			num += 1;
		}
	}
	printf("%d", num);

	return 0;
}