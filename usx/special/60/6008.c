#include <stdio.h>
#include <float.h>

int main () {

	int i;
	float min=FLT_MIN, t;
	while (~scanf ("%f", &min)) {
		for (i = 0; i < 9; ++i) {
			scanf ("%f", &t);
			if (t > min) {
				min = t;
			}
		}
		printf ("%.6f\n", min);
	}


	return 0;
}