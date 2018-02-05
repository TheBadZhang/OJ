#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
int main () {

	vector <string> list;
	string t;
	bool flag;
	while (cin >> t) {
		flag = false;
		for (auto v : list) {
			if (v == t) {
				flag = true;
				break;
			}
		}
		if (!flag) list.push_back (t);
	}
	auto a = [] (string a, string b) -> bool {
		return a > b ? 0 : 1;
	};

	sort (list.begin(), list.end(), a);

	for (auto v : list) {
		cout << v << endl;
	}


	return 0;
}