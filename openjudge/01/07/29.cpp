#include <cstdio>


int main () {
	int n1, n2, n3;
	char n;
	scanf ("%d-%d-%d-%c", &n1, &n2, &n3, &n);
	if (n == 'X') {
		n = 10;
	} else {
		n -= '0';
	}
	int he = (n1 + (n2/100)*2 + ((n2/10)%10)*3 + (n2%10)*4 +(n3/10000)*5 +
	         ((n3/1000)%10)*6 + ((n3/100)%10)*7 + ((n3/10)%10)*8 + (n3%10)*9) % 11;
	if (he == n) {
		printf ("Right");
	} else if (he != 10) {
		printf ("%d-%d-%d-%d", n1, n2, n3, he);
	} else {
		printf ("%d-%d-%d-X", n1, n2, n3);
	}
	return 0;
}