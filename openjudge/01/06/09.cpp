#include <cstdio>

int main () {

	int n;
	scanf ("%d", &n);
	int *A = new int [n];
	int *B = new int [n];
	for (int a = 0; a < n; a += 1) {
		scanf ("%d", &A [a]);
	}
	for (int a = 0; a < n; a += 1) {
		scanf ("%d", &B [a]);
	}
	long long int result = 0;
	for (int a = 0; a < n; a += 1) {
		result += B [a] * A [a];
	}
	printf ("%lld", result);

	return 0;
}