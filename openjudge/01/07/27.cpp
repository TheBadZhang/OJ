#include <iostream>
#include <string>

int main () {

	std::string str;
	std::getline (std::cin, str);
	
	for (int a = 0; a <= str.size (); a += 1) {
		if (str [a] == ' ' || str [a] == '\0') {
			for (int b = a-1; b >= 0; b -= 1) {
				if (str [b] == ' ') {
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