#include <iostream>
#include <cstdio>
#include <cmath>

int a, b, c, d;

double
f (double x) {
	return a * pow (x, 3) + c * x +
	       b * pow (x, 2) + d;
}

void F (double l, double r) {
	double m = (l + r) / 2;
	if ((r-l)<=1) {
		if (f(r)>f(l)||f(l)>f(r)) {
			F (l, m);
			F (m, r);
		} else return ;
	} else {
		F (l, m);
		F (m, r);
	}
	if (abs(f(m)-0) <= 0.01) {
		printf ("%.2f ", m);
		return ;
	}
} 

int main () {

	std::cin >> a >> b >> c >> d;

	F (-100, 100);

	return 0;
}