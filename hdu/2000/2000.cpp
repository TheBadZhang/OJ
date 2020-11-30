#include <cstdio>
#include <iostream>

int main () {


	char a, b, c, t;

	while (std::cin >> a >> b >> c) {
		if (a > b) std::swap (a, b);
		if (a > c) std::swap (a, c);
		if (b > c) std::swap (b, c);
		printf ("%c %c %c\n", a, b, c);
	}



	return 0;
}