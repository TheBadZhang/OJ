#include <cstdio>
#include <iostream>
#include <cmath>
int main () {


	double x1, y1, x2, y2;
	bool flag = false;

	while (std::cin >> x1 >> y1 >> x2 >> y2) {
		printf ("%.2f\n", sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
	}

	return 0;
}