#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>

struct Student {
	int name;
	int ifji;
};

int main () {

	int n, m;
	std::cin >> n >> m;
	std::vector <Student> list;
	for (int a = 0; a < n; a += 1) {
		Student t;
		std::cin >> t.name >> t.ifji;
		list.push_back (t);
	}
	auto a = [] (Student a, Student b){
		if (a.ifji == b.ifji)
			return a.name > b.name ? 0 : 1;
		else return a.ifji > b.ifji ? 1 : 0;
	};
	int ifji2 = floor (m * 1.5);
	std::sort (list.begin(), list.end(), a);
	int count = 0;
	for (auto v : list) {
		if (v.ifji >= list [ifji2-1].ifji)
		count += 1;
	}
	std::cout << list [ifji2-1].ifji << " " << count << std::endl;
	for (auto v : list) {
		count -= 1;
		std::cout << v.name << " " << v.ifji << std::endl;
		if (!count) break;
	}


	return 0;
}