#include <iostream>


int main () {

	int N, M;
	std::cin >> N >> M;
	for (int a = 1; a <= N; a += 1) {
		if (N%a == 0 && N%(M-a) == 0) {
			std::cout << a;
			return 0;
		}
	}

	std::cout << -1;




	return 0;
}