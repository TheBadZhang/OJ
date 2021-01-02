#include <iostream>
#include <cstdio>
#include <functional>


int main () {

	int y, m, d;
	std::function <bool(int)> isLeapYear = [] (int y) -> bool {
		return (y % 100 == 0 && y % 400 == 0) || (y % 100 != 0 && y % 4 == 0);
	};
	while (~scanf ("%d/%d/%d", &y, &m, &d)) {

		switch (m-1) {
			case 11: d += 30;
			case 10: d += 31;
			case  9: d += 30;
			case  8: d += 31;
			case  7: d += 31;
			case  6: d += 30;
			case  5: d += 31;
			case  4: d += 30;
			case  3: d += 31;
			case  2: d += isLeapYear (y) ? 29 : 28;
			case  1: d += 31;
			default : break;
		}
		std::cout << d << std::endl;
	}

	return 0;
}