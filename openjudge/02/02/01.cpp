#include <cmath>
#include <cstdlib>
#include <cstdio>

double
compute (void) {
	char A [20];
	scanf ("%s", A);
	switch (A[0]) {
		case '+' : {
			return compute () + compute();
		} break;
		case '-' : {
			return compute () - compute();
		} break;
		case '*' : {
			return compute () * compute();
		} break;
		case '/' : {
			return compute () / compute();
		} break;
		default : {
			return atof (A);
		}
	}
}


int main () {

	printf("%f\n", compute ());


	return 0;
}