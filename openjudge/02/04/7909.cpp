#include <algorithm>
#include <iostream>
#include <string>

typedef unsigned long long ull;
int main () {

	int n;
	std::cin >> n;

	ull l [210000] = {0}, a, c = 0;

	for (int b = 0; b < n; b += 1) {
		scanf ("%lld", &l [b]);
	}

	std::sort (l, l+n, std::less <ull> ());

	a = l [0];
	// bool flag = false;
	for (int b = 0; b <= n; b ++) {
		if (l [b] != a) {
			printf ("%d %d\n", a, c);
			a = l [b];
			c = 1;
			// flag = true;
		} else {
			c += 1;
		}
	}

	return 0;
}