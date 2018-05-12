#include <cstdio>
#include <iostream>

void up (void) {
	printf ("/\\");
}
void down (void) {
	printf ("/__\\");
}

void print (int x) {
	if (x != 1) print (x-1);
	else {
		printf (" /\\");
	}
}

int main () {

	int n;
	std::cin >> n;

	for (int a = 0; a < pow (2, n); a += 1) {
		for (int b = 0; b < )
		printf ("\n");
	}






	return 0;
}