#include <iostream>

int main () {
// 1 2 3 4 6
	unsigned long long int N [60] = { 1, 1, 1 };
	int n;
	for (int i = 3; i < 60; i++) {
		N [i] = N [i-1] + N [i-3];
		// printf ("%d ", N[i]);
	}
	while (std::cin >> n && n) {
		std::cout << N [n+1] << std::endl;
	}
	return 0;
}