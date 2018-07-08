#include <iostream>
#include <vector>

struct N {
	long long int n;
	int times;
};

int main () {
	std::vector <N> l;
	long long int a;
	int n, max = 0, maxn;
	std::cin >> n;
	
	for (int b = 0; b < n; b += 1) {
		std::cin >> a;
		bool flag = true;
		for (int c = 0; c < l.size (); c += 1) {
			if (l [c].n == a) {
				l [c].times += 1;
				flag = false;
			}
		}
		if (flag) {
			l.push_back ({a, 1});
			// l [l.size () - 1].times = 1;
		}
	}
	for (int b = 0; b < l.size (); b += 1) {
		if (l [b].times > max) {
			max = l [b].times;
			maxn = b;
		}
	}
	std::cout << l [maxn].n;


	return 0;
}