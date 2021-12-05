#define PI 3.1415927
#include <iostream>

int main () {

	double r;
	while (std::cin >> r) {
		printf ("%.3f\n", 4.0/3.0*PI*r*r*r);
	}
	return 0;
}