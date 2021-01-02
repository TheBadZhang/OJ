#include <iostream>
#include <cmath>

int main () {


	int n, t, sum = 0, max=0, min=INT_MAX;
	while (std::cin >> n) {
		sum = 0; max=0; min=INT_MAX;
		for (int i = 0; i < n; ++i) {
			std::cin >> t;
			sum += t;
			max = std::max (max, t);
			min = std::min (min, t);
		}
		printf ("%.2f\n", (sum - max - min)/(double)(n-2));
	}


	return 0;
}