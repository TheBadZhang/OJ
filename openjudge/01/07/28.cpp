#include <iostream>
#include <string>

int main () {

	std::string str;
	std::getline (std::cin, str);
	// // std::cout << str << std::endl;
	str = ' ' + str;
	for (int a = str.size ()-1; a >= 0; a -= 1) {
		if (str [a] == ' ' || str [a] == '\0') {
			for (int b = a+1; b <= str.size (); b += 1) {
				if (str [b] == ' '|| str [b] == '\0') {
					break;
				} else {
					std::cout << str [b];
				}
			}
			if (str [a] == ' ')
				std::cout << ' ';
		}
	}


	return 0;
}