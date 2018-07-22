#include <cstdlib>
#include <cstdio>

double F (void) {
	char A [20];
	scanf ("%s", A);
	switch (A[0]) {
		case '+' : return F () + F (); break;
		case '-' : return F () - F (); break;
		case '*' : return F () * F (); break;
		case '/' : return F () / F (); break;
		default  : return atof (A);
	}
}


int main () {

	printf("%.6f\n", F ());

	return 0;
}