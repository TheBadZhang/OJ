#include <iostream>

int main () {
	int a, b, n;
	std::cin >> a >> b >> n;
	
	a %= b;
	while (--n) a = a*10 % b;

	std::cout << a*10/b;
	return 0;
}