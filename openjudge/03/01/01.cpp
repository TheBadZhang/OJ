#include <vector>
#include <string>
#include <iostream>


int main() {

	struct Stu {
		std::vector<std::string> Name;
		int month;
		int day;
	};
	std::vector<Std> Birth;
	int n;
	std::cin >> n;

	for (int a = 0; a < n; a += 1) {
		std::string name;
		int month, day;
		std::cin >> name >> month >> day;
		for (auto &x : Birth) {
			if (x.month == month && x.day == day) {
				// for (int y = 0; y < max(x.))
				x.Name.push_back(name);
			} else {
				Stu sss = {name, month, day};
				Birth.push_back(sss);
			}
		}
	}

	for (auto &a : Birth) {
		std::cout << a.month << " " << a.day << " ";
		for (auto &b : a.Name) {
			std::cout << b << " ";
		}
		std::cout << "\n";
	}

	for (int a = 0; a < n; a += 1) {

	}


	return 0;
}