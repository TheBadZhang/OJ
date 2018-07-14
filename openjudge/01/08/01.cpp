#include <iostream>
#include <cstdio>

int main () {

	int mp [5][5];
	int m, n;


	for (int a = 0; a < 5; a ++)
		for(int b = 0; b < 5; b++)
			std::cin >> mp [a][b];

	std::cin >> m >> n;


	for (int a = 0; a < 5; a ++) {
		for(int b = 0; b < 5; b++)
			if (a == m - 1) printf ("%d ", mp [n - 1][b]);
			else if (a == n - 1) printf ("%d ", mp [m - 1][b]);
			else printf ("%d ", mp [a][b]);
		std::cout << std::endl;
	}

	return 0;
}