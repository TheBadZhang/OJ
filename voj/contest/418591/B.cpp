#include <iostream>
#include <cmath>

double a;
const double pi = 3.14159265357989;

int main () {

	
	while (std::cin >> a) {
		printf ("%.3lf %.3lf %.3lf\n",
			a*a*(1+pi/3-sqrt(3.0)),
			a*a*(pi/3+2*sqrt(3.0)-4.0),
			a*a*(-2*pi/3+4-sqrt(3.0))
		);
	}

	return 0;
}