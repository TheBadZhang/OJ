#include <iostream>
#include <cstdio>

int main () {

	int n, i, j, a;
	std::cin >> n >> i >> j;
	for (a = 1; a <= n; a ++)
		printf ("(%d,%d) ", i, a);
	std::cout << std::endl;
	for (a = 1; a <= n; a ++)
		printf ("(%d,%d) ", a, j);
	std::cout << std::endl;
	for (a = 1; a <= n; a ++) {
		int b = a + (j-i);
		if (a > 0 && b > 0 && a <= n && b <= n)
			printf ("(%d,%d) ", a, b);
	}
	std::cout << std::endl;
	for (a = 1; a <= i + j; a ++) {
		int b = i+j - a;
		if (a > 0 && b > 0 && a <= n && b <= n)
			printf ("(%d,%d) ", b, a);
	}

	return 0;
}