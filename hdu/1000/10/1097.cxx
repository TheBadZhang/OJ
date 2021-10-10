#include <cstdio>


int main() {
	long long a,b;
	while (~scanf ("%lld %lld",&a,&b)) {
		if (a == 1) {
			printf ("1\n");
			continue;
		}
		long long k=1;
		while (b) {
			if (b & 1) k = k*a % 10;
			a = a*a % 10;
			b >>= 1;
		}
		printf ("%lld\n", k%10);
	}
	return 0;
}