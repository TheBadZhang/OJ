#include <iostream>
#include <cmath>

bool
Issuuu (int n) {
	if (n&1 == 0) return false;
	else {
		for (int a = 2; a <= sqrt (n); a += 1)
			if (n%a == 0) return false;
		return true;
	}
}

int main () {

	int b = 0, n, list [1000] = {0};
	std::cin >> n;
	list [0] == 3;
	if (n>=5) printf ("3 5\n");
	for (int a = 4; a <= n; a += 1) {
		if (Issuuu (a)) {
			list [b] = a;
			if (list [b] - list [b-1] == 2)
				printf ("%d %d\n",list [b-1], list [b]);

			// std::cout << a << "  ";
			b += 1;
		}
	}


	return 0;
}