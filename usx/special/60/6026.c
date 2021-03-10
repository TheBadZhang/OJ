#include <stdio.h>

int smallestPrim (int n) {
	int i = 2;
	while (n%i++!=0);
	return i;
}

int main () {

	int i, t, s;
	for (i = 2; i < 10000; ++i) {
		t = i;
		s = 0;
		while (t > 0) {
			s += smallestPrim(t);
			t /= smallestPrim(t);
		}
		if (i == s) {
			printf ("%d its factors are ");
			t = i;
			printf ("%d", smallestPrim(t));
			while (t > 0) {
			}
		}
	}

	return 0;
}