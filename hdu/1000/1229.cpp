#include <iostream>
#include <cmath>

int main () {

	int a, b, k, r, pk;
	bool flag = false;
	while (std::cin >> a >> b >> k, a|b) {
		r = a + b;
		pk = pow (10, k);
		if (a%pk == b%pk) {
			printf ("-1\n");
		} else {
			printf ("%d\n", r);
		}
		flag = true;
	}




	return 0;
}