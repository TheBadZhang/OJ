#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>


int main () {

	std::string lstr, str;
	bool flag = false;
	while (getline(std::cin, lstr)) {
		std::stringstream ss (lstr);
		while (ss >> str) {
			if (std::tolwer(str[0]) == 'a' ||
			    std::tolwer(str[0]) == 'e' ||
			    std::tolwer(str[0]) == 'i' ||
			    std::tolwer(str[0]) == 'o' ||
			    std::tolwer(str[0]) == 'u') {
			} else {
				std::reverse (str.begin(), str.end());
			}
			str += "ay";
			if (flag) {
				std::cout << " ";
			}
			std::cout << str;
			flag = true;

		}
		std::cout << std::endl;
	}


	return 0;
}