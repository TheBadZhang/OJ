#include <string>
#include <iostream>

int main () {

	std::string str;
	std::getline (std::cin, str);
	if (str.rfind ("ing") != std::string::npos) {
		str.erase (str.rfind ("ing"));
	} else if (str.rfind ("er") != std::string::npos) {
		str.erase (str.rfind ("er"));
	} else if (str.rfind ("ly") != std::string::npos) {
		str.erase (str.rfind ("ly"));
	}
	std::cout << str;

	return 0;
}