#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>

struct Student {
	double x;
	std::string name;
};

int main () {

	int n = 0;
	std::cin >> n;
	std::vector <Student> list;
	for (int a = 0; a < n; a += 1) {
		Student t;
		std::cin >> t.name >> t.x;
		list.push_back (t);
	}
	auto a = [] (Student a, Student b){
		if (a.name == "male" && b.name == "male") {
			// 都是男性
			return a.x > b.x ? 0 : 1;
		} else if (a.name == "female" && b.name == "female") {
			// 都是女性
			return a.x < b.x ? 0 : 1;
		} else {
			// 一男一女
			return a.name < b.name ? 0 : 1;
		}
	};

	std::sort (list.begin(), list.end(), a);

	for (auto v : list) {
		printf ("%.2f ", v.x);
		// std::cout << v.x << " ";
	}


	return 0;
}