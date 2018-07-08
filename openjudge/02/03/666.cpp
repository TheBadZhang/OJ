#include <iostream>


int main () {

	int map [12][12] = {0};
	for (int a = 0; a <= 10; a += 1) {
		for (int b = 0; b <= 10; b += 1) {
			if (a <= 1 || b <= 1) {
				map [a][b] = 1;
			} else if (b <= a) {
				map [a][b] = map [a-b][b] + map [a][b-1];
			} else {
				map [a][b] = map [a][a];
			}
			// printf ("%3d", map [a][b]);
		}
		// printf ("\n");
	}

	int n, M, N;
	std::cin >> n;
	
	for (int a = 0; a < n; a += 1) {
		std::cin >> M >> N;
		std::cout << map [M][N] << std::endl;
	}






	return 0;
}