#include <stdio.h>

int main () {

	int s, w, p;
	float price, rate;
	while (~scanf ("%d %d %d", &s, &w, &p)) {
		if (w < 2) {
			rate = 0.98;
		} else if (w < 4) {
			rate = 0.96;
		} else if (w < 6) {
			rate = 0.94;
		} else {
			rate = 0.92;
		}
		if (s < 300) {
			rate += 0.02;
		}
		price = s*w*p*rate;
		printf ("%.2f\n", price);
	}


	return 0;
}