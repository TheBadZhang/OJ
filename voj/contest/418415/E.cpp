#include <iostream>
#include <cmath>
#include <string>

const double PI  = 3.1415926535897932384626433;
const double d2r = PI/180.0;

int main () {

	double s, a, deg;
	std::string flag;
	while (std::cin >> s >> a >> flag) {
		s += 6440.0;
		if (flag [0] == 'm') {
			a /= 60.0;
		}
		while (a > 360.0) {
			a -= 360;
		}
		if (a > 180.0) {
			a = 360.0-a;
		}
		printf ("%.6lf %.6lf\n", s*a*d2r, s*sin(d2r*a/2.0)*2.0);
	}

	return 0;
}