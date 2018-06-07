#include <iostream>

unsigned long long int
c (int n) {
	if (n == 1 || n == 2) return n;
	else return c (n-1) + c (n-2);
}

int main () {
	int a;
	while (std::cin >> a) {
		std::cout << c (a) << std::endl;
	}
	return 0;
}