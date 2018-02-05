#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>

struct Student {
	int x;
};

int main () {

	int n = 10;
	// std::cin >> n >> m;
	std::vector <Student> list;
	for (int a = 0; a < n; a += 1) {
		Student t;
		std::cin >> t.x;
		list.push_back (t);
	}
	auto a = [] (Student a, Student b){
		if (a.x % 2 == 0 && b.x % 2 == 0) {
			// 都是偶数
			return a.x > b.x ? 0 : 1;
		} else if (a.x%2 == 1 && b.x%2 == 1) {
			// 都是奇数
			return a.x < b.x ? 0 : 1;
		} else {
			// 一奇一偶
			return a.x % 2 == 0 ? 0 : 1;
		}
	};

	std::sort (list.begin(), list.end(), a);

	for (auto v : list) {
		std::cout << v.x << " ";
	}


	return 0;
}