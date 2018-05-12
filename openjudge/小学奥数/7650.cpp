#include <iostream>

int main () {


	int a, b, c, x, y, count = 0;
	std::cin >> a >> b >> c;

	for (x = 0; x <= 1000; x +=1) {
		for (y = 0; y <= 1000; y += 1) {
			if (a*x+b*y==c) {
				count += 1;
			}
		}
	}
	std::cout << count;



	return 0;
}