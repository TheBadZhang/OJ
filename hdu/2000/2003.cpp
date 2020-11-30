#include <iostream>
#include <cmath>

int main () {

	double r;
	while (std::cin >> r) {
		printf ("%.2f\n", std::abs (r));
	}
	return 0;
}