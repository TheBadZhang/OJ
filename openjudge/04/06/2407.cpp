#include <iostream>
#include <algorithm>


int main () {

	int N, B;
	std::cin >> N >> B;

	int H [20000] = {0};
	for (int a = 0; a < N; a += 1) {
		std::cin >> H [a];
	}

	std::sort (H, H+N);

	int He = 0, t = N-1;
	while (He < B) {
		He += H [t];
		// std::cout << H [t] << std::endl;
		t--;
	}
	std::cout << N-t-1;



	return 0;
}