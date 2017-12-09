#include <iostream>
#include <string>
int main () {
	std::string str;
	bool flag = false;
	while (std::cin >> str) {
		if (flag) std::cout << ','; flag = true;
		std::cout << ',' << str.size ();
	}
	return 0;
}