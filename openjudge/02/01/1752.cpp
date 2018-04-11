#include <iostream>
#include <cstdio>

int main () {

	int a;
	std::cin >> a;

	if (a%2 != 0 || a == 0) printf ("0 0\n");
	else printf ("%d %d\n", (a+2)/4, a/2);

	return 0;
}