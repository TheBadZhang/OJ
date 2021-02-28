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
			if (std::tolower(str[0]) == 'a' ||
			    std::tolower(str[0]) == 'e' ||
			    std::tolower(str[0]) == 'i' ||
			    std::tolower(str[0]) == 'o' ||
			    std::tolower(str[0]) == 'u') {
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