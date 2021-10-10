#include <iostream>
#include <cstdio>

int main () {


	int m, n;
	double result [1000] = {1};
	for (int i = 1; i < 1000; i ++) {
		result [i] += result [i-1] + ((i&0x1) ? -1.0/(i+1) : 1.0/(i+1));
	}
	std::cin >> m;
	for (int i = 0; i < m; ++i) {
		std::cin >> n;
		printf ("%.2f\n", result[n-1]);
	}



	return 0;
}