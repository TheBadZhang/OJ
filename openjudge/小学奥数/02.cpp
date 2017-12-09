#include <cstdio>
#include <cmath>

int main () {

	int a, b, c, d;
	double pool = 0;
	double timee = 0.0;
	scanf ("%d%d%d%d", &a, &b, &c, &d);
	int top = a * b * c * d;
	// 最高水位；
	a = (double)top / a;
	b = (double)top / b;
	c = (double)top / c;
	d = (double)top / d;
	for (int i = 0;; i += 1) {
		if (i % 4 == 0) {
			if (pool + a < top) {
				pool += a;
				timee += 1;
			} else {
				timee += (top-pool)/a;
				break;
			}
		} else if (i % 4 == 2) {
			if (pool + c < top) {
				pool += c;
				timee += 1;
			} else {
				timee += (top-pool)/c;
				break;
			}
		} else if (i % 4 == 1) {
			pool -= b;
			timee += 1;
		} else if (i % 4 == 3) {
			pool -= d;
			timee += 1;
		}
	}
	
	// 莫名其妙的AC
	printf ("%.2lf", timee);
	return 0;
}