#include <iostream>
#include <cmath>

bool
Issuuu (int n) {
	for (int a = 2; a <= sqrt (n); a += 1)
		if (n%a == 0) return false;
	return true;
}

int main () {

	int b = 0, a, n, l [5000] = {0};
	std::cin >> n;
	
	for (a = 3; a <= n; a += 1)
		if (Issuuu (a)) l [b++] = a;
	if (l [1] == 0) printf ("empty");
	else for (a = 1; a < b; a += 1)
		if (l [a] - l [a - 1] == 2)
			printf ("%d %d\n", l [a - 1], l [a]);

	return 0;
}