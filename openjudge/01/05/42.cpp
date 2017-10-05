#include <iostream>


int main() {

	int x, y;
	char c;
	int b;
	// scanf("%d%d%c%d", &x, &y, &c, &b);
	std::cin >> x >> y >> c >> b;
	for (int a = 0; a < x; a += 1) {
		for (int d = 0; d < y; d += 1) {
			if (a == 0 || a == x-1 || d == 0 || d == y-1 && b == 0) {
				std::cout << c;
			} else if (b) {
				std::cout << c;
			} else {
				std::cout << " ";
			}
		}
		std::cout << "\n";
	}

	return 0;
}