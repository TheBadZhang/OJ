#include <iostream>

long long int f (int A, int B, int n) {
	long long int f1 = 1, f2 = 1, r;
	if (n == 1) {
		return 1;
	} else if (n == 2) {
		return 1;
	} else {
		for (int i = 3; i <= n; ++i) {
			r = (A*f1+B*f2)%7;
			f2 = f1;
			f1 = r;
			// printf ("r:%lld, f1:%lld, f2:%lld\n", r, f1, f2);
		}
	}
	return r;
}

int main () {

	int A, B, n;
	while (std::cin >> A >> B >> n) {
		if (A==0&&B==0&&n==0) {
			break;
		}
		printf ("%lld\n", f(A, B, n));
	}



	return 0;
}