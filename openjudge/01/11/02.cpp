#include <iostream>
#include <cmath>

double
f (double x) {
	return pow (x, 5) - (15*pow (x, 4)) +
	       (85*pow (x, 3)) - (225*pow (x, 2))+ 
		   (274*x) - 121;
}
bool
equal (double a, double b) {
	if (std::abs (a - b) <= 1E-9) return true;
	else return false;
}

double
count (double a, double b) {
	double middle = (a + b) / 2.0;
	if (equal (f (a), f (b))) {
		return middle;
	} else {
		if (f (middle) > 0.00000) {
			return count (middle, b);
		} else return count (a, middle);
	}
}

int main () {
	
	printf ("%.6f", count (1.5, 2.4));
	// 只用下面这一句就可以AC了
	// printf ("1.849016");

	return 0;
}