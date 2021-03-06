﻿#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

struct Student {
	std::string name;
	int ifji;
};

int main () {

	int n;
	std::cin >> n;
	std::vector <Student> list;
	for (int a = 0; a < n; a += 1) {
		Student t;
		std::cin >> t.name >> t.ifji;
		list.push_back (t);
	}
	auto a = [] (Student a, Student b){
		if (a.ifji == b.ifji)
			if (a.name < b.name) return 1;
			else return 0;
		else return a.ifji > b.ifji ? 1 : 0;
	};

	std::sort (list.begin(), list.end(), a);
	for (auto v : list) {
		std::cout << v.name << " " << v.ifji << std::endl;
	}


	return 0;
}