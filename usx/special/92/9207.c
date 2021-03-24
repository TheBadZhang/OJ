#include <stdio.h>

int main () {

	float a;
	while (~scanf ("%f", &a)) {
		if (a <= 50.0) {
			printf ("%.2f\n", a*0.15);
		} else {
			printf ("%.2f\n", 7.5+(a-50)*0.25);
		}
	}


	return 0;
}