#include <iostream>

int main () {

	int x, y, n, b = 2;
	std::cin >> x >> y >> n;

	for (; n > 0; n --)
		b = b + 2*(b-1);

	std::cout << (x+y) * b / 2;

	return 0;
}