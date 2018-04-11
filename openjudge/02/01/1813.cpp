#include <iostream>
#include <cstdio>

	bool button [5][6];

void print () {
	for (int a = 0; a < 5; a += 1) {
		for (int b = 0; b < 6; b += 1) {
			printf ("%d ", button [a][b]);
		}
		printf ("\n");
	}
}

int main () {



	for (int a = 0; a < 5; a += 1) {
		for (int b = 0; b < 6; b += 1) {
			std::cin >> button [a][b];
		}
	}
	// print ();
	







	return 0;
}