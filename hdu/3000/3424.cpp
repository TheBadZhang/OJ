#include <cstdio>
#include <cmath>

#define F(x) abs(x) > 1e-6

using namespace std;


int main() {
	double x, y, a, b, s, f;
	while (scanf("%lf%lf", &x, &y) && (F(x + 1.0) || F(y + 1.0))) 	{
		s = f = 0;
		while (scanf("%lf%lf", &a, &b) && (F(a) || F(b))) {
			if (b < y) {
				s += a - x;
				f += y - b;
			}
			x = a;
			y = b;
		}
		printf("%.0lf\n", s / f * y);
	}
}