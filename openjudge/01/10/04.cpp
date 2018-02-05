#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

struct Student {
	std::string name;
	int hkci, yu;
	int zsff;
};

int main () {

	int n;
	std::cin >> n;
	std::vector <Student> list;
	for (int a = 0; a < n; a += 1) {
		Student t;
		int uu, yn;
		std::cin >> t.yu >> uu >> yn;
		t.zsff = t.yu + uu + yn;
		t.hkci = a + 1;
		list.push_back (t);
	}
	auto a = [] (Student a, Student b){
		if (a.zsff == b.zsff){
			if (a.yu == b.yu) {
				if (a.hkci < b.hkci) return 1;
				else return 0;
			}
			if (a.yu < b.yu) return 0;
			else return 1;
		}

		else return a.zsff > b.zsff ? 1 : 0;
	};

	std::sort (list.begin(), list.end(), a);
	int count = 0;
	for (auto v : list) {
		count += 1;
		std::cout << v.hkci << " " << v.zsff << std::endl;
		if (count == 5) {
			break;
		}
	}


	return 0;
}