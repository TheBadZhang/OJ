#include <cstdio>
int main() {
	int t;
	long long int n;
	scanf("%d", &t);
	while (t--) {
		scanf("%lld", &n);
		printf("%lld %lld\n", n*n*n, (n+1) * (n+1) * (n+1));
	}
	return 0;
}