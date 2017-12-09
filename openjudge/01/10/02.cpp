#include <iostream>
#include <algorithm>
#include <vector>

struct S {
	int k;
};

int main () {

	int n;
	int f = 0;
	std::cin >> n;
	std::vector <S> list;
	for (int a = 0; a < n; a += 1) {
		S t;
		std::cin >> t.k;
		if (t.k % 2 != 0) {
			f += 1;
			list.push_back (t);
		}
	}
	auto a = [](S a, S b){return a.k > b.k ? 0 : 1;};
	std::sort (list.begin(), list.end(), a);
	for (int b = 0; b < f; b += 1) {
		if (b) {
			std::cout << ",";
		}
		std::cout << list[b].k;
	}


	return 0;
}