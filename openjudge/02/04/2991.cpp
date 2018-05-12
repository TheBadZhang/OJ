#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>

int main () {


	std::string num;
	int k, n, s, m;
	std::cin >> k;
	for (int a = 0; a < k; a += 1) {
		std::cin >> num;
		n = 0, m = 2011;
		s = num.size ();
		for (int b = s - 1; b > s - 4 && b >= 0; b -= 1)
			n += (num [b] - '0') * pow (10, abs(b-s)-1);
		n %= 500;
		for (int b = 1; b < n; b += 1) {
			m *= 2011;
			m %= 10000;
		}
		std::cout << m << std::endl;
	}


	return 0;
}