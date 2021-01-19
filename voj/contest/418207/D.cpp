#include <iostream>



int main () {

	int n, max = 0, min = 0;
	long long int a [100] = { 1, 1 };
	for (int i = 2; i<100 ; ++i) {
		if (a[i-1]>6227020800ll) {
			max = i-2;
			i = 100;
			break;
		} else {
			a [i] = i*a[i-1];
			if (a [i] < 10000ll) {
				min = i+1;
			}
		}
		// printf("%lld  ", a[i]);
	}
	while (std::cin >> n) {
		if (n > max) {
			std::cout << "Overflow!" << std::endl;
		} else if (n < min){
			std::cout << "Underflow!" << std::endl;
		} else {
			std::cout << a [n] << std::endl;
		}
	}

	return 0;
}