#include <iostream>
#include <string>

int main () {

	std::string str;
	bool flag = false;
	while (std::cin >> str) {
		if (flag) std::cout << ' ';
		std::cout << str;
		flag = true;
	}


	return 0;
}