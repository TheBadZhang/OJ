#include <iostream>
#include <algorithm>
#include <vector>

struct Student {
	int hkci;
	double ifji;
};

int main () {

	int n, k;
	std::cin >> n >> k;
	std::vector <Student> list;
	for (int a = 0; a < n; a += 1) {
		Student t;
		std::cin >> t.hkci >> t.ifji;
		list.push_back (t);
	}
	auto a = [](Student a, Student b){return a.ifji > b.ifji ? 1 : 0;};
	std::sort (list.begin(), list.end(), a);
	std::cout << list [k-1].hkci << " " << list [k-1].ifji;


	return 0;
}