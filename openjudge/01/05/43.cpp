#include <iostream>
#include <cmath>

bool 
IsSuUu (long long int num) {
	if (num % 2 == 0 && num != 2) {
		return 0;
	} else {
		for (int a = 2; a < sqrt(num); a += 1) {
			if (num % a == 0 && num != 2) {
				return 0;
			}
		}
		return 1;
	}
}

int
main () {

	long long int n;
	std::cin >> n;
	for (int a = 2; a < n; a += 1) {
		if (IsSuUu(a)) {
			if (n%a == 0) {
				int temp = n/a;
				if (IsSuUu(temp)) {
					int max = temp > a ? temp : a;
					std::cout << max;
					return 0;
				}
			}
		}
	}

	return 0;

}