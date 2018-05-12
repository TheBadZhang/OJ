#include <iostream>
#include <cmath>


int H1 (int n) {
	int c = 0;
	while (n > 0) {
		if (n%2) c += 1;
		n /= 2;
	}
	return c;
}

int main () {
	
	int N, a;
	while (true) {
		std::cin >> N;
		if (N == 0) return 0;
		int m = N;
		while (true) {
			if (H1 (++m) == H1 (N)) {
				std::cout << m << std::endl;
				break;
			}
		}
	}
	
	
	
	
	return 0;
}