#include <iostream>

using namespace std;

int main () {

	double i_ = 1;
	double e = 1.0;
	printf ("n e\n");
	printf ("- -----------\n");
	for (int i = 0; i <= 9; i++) {
		printf ("%d ", i);
		if (i <= 1) {
			printf ("%.0f\n", e);
		} else if (i == 2) {
			printf ("%.1f\n", e);
		} else {
			printf ("%.9lf\n",e);
		}
		i_ *= i+1;
		e += 1.0/i_;
	}

	return 0;
}