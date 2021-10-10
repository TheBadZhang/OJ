#include <iostream>
#include <cstdio>
int main () {


	int i, k, l;
	int n;
	double t;
	while (std::cin >> n) {
		if (!n) break;
		l = k = i = 0;
		for (int j = 0; j < n; j ++) {
			std::cin >> t;
			if (t > 0) i ++;
			else if (t < 0) k ++;
			else l ++;
		}
		printf ("%d %d %d\n", k, l, i);
	}



	return 0;
}