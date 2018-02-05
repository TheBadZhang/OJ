#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>

struct Student {
	int x, count;
	std::string name;
};

int main () {

	int n = 0;
	std::cin >> n;
	std::vector <Student> list;
	for (int a = 0; a < n; a += 1) {
		Student t;
		std::cin >> t.name >> t.x;
		t.count = a + 1;
		list.push_back (t);
	}
	auto a = [] (Student a, Student b){
		if (a.x >= 60 && b.x >= 60) {
			// 都是老年人
			if (a.x == b.x)
				return a.count > b.count ? 0 : 1;
			else return a.x > b.x ? 1 : 0;
		} else if (a.x < 60 && b.x < 60) {
			// 都是年轻人
			return a.count > b.count ? 0 : 1;
		} else {
			// 一老一小
			return a.x >= 60 ? 1 : 0;
		}
	};

	std::sort (list.begin(), list.end(), a);

	for (auto v : list) {
		// printf ("%.2f ", v.x);
		std::cout << v.name << std::endl;
	}


	return 0;
}