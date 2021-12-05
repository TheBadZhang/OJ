#include <iostream>

int main () {


	long long int i, k;
	int n, t;
	while (std::cin >> n >> t) {
		i = 0;
		k = 0;
		for (int j = std::min(t,n); j <= std::max(t,n); j ++) {

			if (j&0x1) {
				i += j*j*j;
			} else {
				k += j*j;
			}
		}
		std::cout << k << " " << i << std::endl;
	}



	return 0;
}