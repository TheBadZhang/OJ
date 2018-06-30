#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>


int main () {

	int a, b;
	std::string s;
	std::cin >> a >> s >> b;
	unsigned long long int c = 0;

	std::transform (s.begin (), s.end (), s.begin (), toupper);

	for (int d = 0; d < s.size (); d += 1) {
		int e;
		if (s [d] >= 'A' && s [d] <= 'F') {
			e = s [d] - 'A' + 10;
		} else {
			e = s [d] - '0';
		}
		c += e * pow (a, s.size () - 1 - d);
	}
	std::string r;
	do {
		// std::cout << c % b;
		int e = c % b;
		
		if (e >= 10 && e <= 15) {
			r = r + (char)(e + 'A' - 10);
		} else {
			r = r + (char)(e + '0');
		}
		c /= b;
	} while (c > 0);

	for (int d = 0; d < r.size (); d += 1) {
		std::cout << r [r.size () - d - 1];
	}



	return 0;
}