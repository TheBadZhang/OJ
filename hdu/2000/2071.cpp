#include <iostream>

int main () {

	int T, n;
	float t, maxt;
	std::cin >> T;
	while (T-- > 0) {
		std::cin >> n;
		maxt = 0.0;
		while (n-- > 0) {
			std::cin >> t;
			if (t > maxt) {
				maxt = t;
			}
		}
		printf ("%0.2f\n", maxt);
	}



	return 0;
}