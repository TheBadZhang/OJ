#include <iostream>


int main () {

	int p, e, i, d;
	std::cin >> p >> e >> i >> d;
	
	for (int a = 1;; a += 1) {

		if ((a-p)%23 == 0 &&
		    (a-e)%28 == 0 &&
		    (a-i)%33 == 0) {

			if (a >= p &&
			    a >= e &&
			    a >= i) {
				std::cout << a - d << std::endl;
				return 0;
			}
		}
	}

	return 0;
}