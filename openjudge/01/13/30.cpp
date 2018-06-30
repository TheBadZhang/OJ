#include <iostream>

int main () {

	unsigned int n, r = 0;
	std::cin >> n;

	for (int a = 0; a < 32; a ++)
		if (n & 1 << a)
			r ++;

	std::cout << r;


	return 0;
}