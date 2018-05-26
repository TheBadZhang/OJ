#include <iostream>
#include <cmath>

bool
is (int n) {
	int s = sqrt (n), a = 2;

	for (; a <= s; a += 1) {
		if (!(n%a)) return false;
	}
	return true;

}

int main () {

	int s;
	std::cin >> s;
	int l = s/2, r = (s+1) / 2;
	while (!(is (l) && is (r))) {
		l -= 1; r += 1;
	}
	std::cout << l*r;

	return 0;
}