#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
	double x[4], y[4];
	while (~scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &x[0], &y[0], &x[1], &y[1], &x[2], &y[2], &x[3], &y[3])) {
		double minx1 = min(x[0], x[1]), maxx1 = max(x[0], x[1]), minx2 = min(x[2], x[3]), maxx2 = max(x[2], x[3]);
		double miny1 = min(y[0], y[1]), maxy1 = max(y[0], y[1]), miny2 = min(y[2], y[3]), maxy2 = max(y[2], y[3]);
		if (minx1 >= maxx2 || maxx1 <= minx2 || maxy1 <= miny2 || miny1 >= maxy2)
			printf("%.2lf\n", 0);
		else {
			sort(x, x + 4);
			sort(y, y + 4);
			printf("%.2lf\n", (x[2] - x[1]) * (y[2] - y[1]));
		}
	}
}