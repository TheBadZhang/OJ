#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
	long long n;
	int i, j, k;

	while (scanf("%I64d", &n) != EOF) {
		long long sum = 0;
		n = n % 10000;

		long long h = (n * (n + 1) / 2);
		sum = ((h * h) % 10000);
		sum = sum % 10000;
		if (sum < 10)
			printf("000%I64d\n", sum);
		else if (sum < 100)
			printf("00%I64d\n", sum);
		else if (sum < 1000)
			printf("0%I64d\n", sum);
		else
			printf("%I64d\n", sum);
	}

	return 0;
}