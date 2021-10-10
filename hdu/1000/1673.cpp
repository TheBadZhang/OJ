#include <iostream>
#include <algorithm>
#include <cstdio>

int main () {

	int t, n;
	int store [25];

	std::cin >> t;

	while (t--) {
		std::cin >> n;
		for (int i = 0; i < n; i++) {
			std::cin >> store [i];
		}
		std::sort (store, store+n, std::less<int> ());
		std::cout << (store[n-1] - store [0])*2 << std::endl;
	}

	return 0;
}