#include <iostream>
#include <array>
#include <algorithm>
#include <cmath>

int main () {

	std::array <int, 100> l {0};
	int n;
	while (std::cin >> n) {
		if (!n) break;
		for (int i = 0; i < n; ++i) {
			std::cin >> l[i];
		}
		std::sort (l.begin (), l.begin () + n, [](int a, int b)->bool{return abs(a)>abs(b);});
		
		printf ("%d", l[0]);
		for (int i = 1; i < n; ++i) {
			printf (" %d", l[i]);
		}
		printf ("\n");
	}



	return 0;
}