#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

int main () {
	
	int week, day = 1, a = 1;
	std::cin >> week;
	
	while (true) {
		if (a > 12) break;
		if (week == 5 && day == 13) {
			std::cout << a << std::endl;
		}
		
		day ++;
		if (a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12) {
			if (day > 31) {
				day = 1;
				a += 1;
			}
		} else if (a == 4 || a == 6 || a == 9 || a == 11) {
			if (day > 30) {
				day = 1;
				a += 1;
			}
		} else {
			if (day > 28) {
				day = 1;
				a += 1;
			}
		}
		week ++;
		if (week > 7) week = 1;
	}
	
	
	return 0;
}