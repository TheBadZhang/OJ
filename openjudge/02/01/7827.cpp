#include <iostream>
#include <cmath>

bool
Issuuu (int n) {
	for (int a = 2; a <= sqrt (n); a += 1)
		if (n%a == 0) return false;
	return true;
}

int main () {

	int m;
	std::cin >> m;
	for (int a = m/2; a > 0; a -= 1) {
		if (Issuuu (a) && Issuuu (m - a)) {
			std::cout << a * (m-a);
			return 0;
		}
	}
}