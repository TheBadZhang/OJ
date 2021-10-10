#include <cstdio> 
using namespace std;

int qp (long long n) {
	int res = 1, t = n%10;
	while (n) {
		if (n & 1) res = res*t % 10;
		t = t*t % 10;
		n >>= 1;
	}
	return res;
}

int main() {
	int d;
	long long n;
	scanf ("%d",&d);
	while (d--) {
		scanf ("%lld", &n);
		printf ("%d\n", qp(n));
	}
	return 0;
}