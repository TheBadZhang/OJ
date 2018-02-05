#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>



int main () {

	int n, m, a, c;
	std::vector <int> list;
	
	std::cin >> n;
	for (a = 0; a < n; a += 1) {
		std::cin >> c;
		list.push_back (c);
	}
	std::cin >> m;

	sort (list.begin (), list.end (), [](int a, int b){return a > b ? true : false;});

	int l = 0, r = list.size () - 1;
	// printf ("%d %d\n", list [l], list [r]);
	while (list [l] + list [r] != m && l < r) {
		if (abs (list [l] - m/2) > abs (list [r] - m/2)) {
			l += 1;
		} else if (abs (list [l] - m/2) < abs (list [r] - m/2)) {
			r -= 1;
		} else {
			l += 1;
			r -= 1;
		}
	}

	if (list [l] + list [r] == m && l != r) {
		printf ("%d %d", list [r], list [l]);
	} else printf ("No");


	return 0;
}