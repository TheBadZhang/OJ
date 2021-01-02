#include <iostream>
#include <cmath>
#include <cstdio>

int main () {

	int m;
	double sum, n;
	while (std::cin >> n >> m) {
		sum = 0.0;
		for (int i = 0; i < m; i++) {
			sum += n;
			n = sqrt (n);
		}
		printf ("%.2f\n", sum);
	}




	return 0;
}