#include <iostream>
#include <cstdio>

int main () {

	int n, a, b, r;
	char c;
	std::cin >> n;
	while (n--) {
		std::cin >> a >> c >> b;
		switch (c) {
			case '+': r = a + b; break;
			case '-': r = a - b; break;
			case '*': r = a * b; break;
		}
		std::cout << r << std::endl;
	}


	return 0;
}