#include <algorithm>
#include <iostream>
#include <vector>

struct N {
	int n, x;
	bool operator()(int a, int b) const {
		return a < b;
	}
};

int main () {

	unsigned long long int c = 0;
	std::vector <N> l;
	int n, t;

	std::cin >> n;
	for (int a = 0; a < n; a ++) {
		std::cin >> t;
		l.push_back ({t, a});
	}

	std::sort (l.begin (), l.end (), =[](const N &a, const N &b){return a.n > b.n})

	for (int a = 0; a < n - 1; a ++)
		for (int b = a + 1; b < n; b ++)
			if (l [a] > l [b]) c ++;

	std::cout << c;

	return 0;
}