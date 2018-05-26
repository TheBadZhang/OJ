#include <iostream>

int main () {

	int n;
	float j = 0.0;
	std::cin >> n;
	for (; n > 0; n --) {
		j += 1;
		j /= 2;
	}
	printf ("%.5f", j);
}