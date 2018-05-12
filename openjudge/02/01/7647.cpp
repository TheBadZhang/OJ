#include <iostream>

int main () {

	int a, b, c;
	std::cin >> a >> b >> c;

	for (int x = 2; true; x ++)
		if (a%x == b%x && b%x == c%x) {
			std::cout << x;
			return 0;
		}
}