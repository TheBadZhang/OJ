#include <iostream>
#include <string>

int main () {

	int n, c;
	std::cin >> n;
	std::string str;
	std::cin >> str;
	char ch = 0;
	bool flag = true;
	for (auto a : str) {
		if (ch != a) {
			ch = a;
			c = 1;
		} else {
			c += 1;
			if (c == n && flag) {
				std::cout << ch;
				flag = false;
			}
		}
	}
	if (flag) {
		std::cout << "No";
	}

	return 0;
}