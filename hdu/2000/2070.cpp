#include <cstdio>

int main () {

	unsigned long long int fibbonacci [51] = {0, 1};
	for (int i = 2; i < 51; ++i) {
		fibbonacci [i] = fibbonacci [i-1] + fibbonacci [i-2];
	}
	for (int n;~scanf ("%d", &n),n!=-1;) {
		printf ("%lld\n", fibbonacci[n]);
	}
	return 0;
}