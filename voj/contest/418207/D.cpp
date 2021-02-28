#include <iostream>


int main () {

	int n, max = 0, min = 0;
	long long int a [100] = { 1, 1 };
	for (int i = 2; i < 20 ; ++i) {
		a [i] = i*a[i-1];
		// printf("%lld  ", a[i]);
	}
	while (std::cin >> n) {
		if (n > 13 || (n < 0 && (-n)%2 == 1)) {
			std::cout << "Overflow!" << std::endl;
		} else if (n < 8 || (n < 0 && (-n)%2 == 0)){
			std::cout << "Underflow!" << std::endl;
		} else {
			std::cout << a [n] << std::endl;
		}
	}

	return 0;
}