#include <iostream>
#include <string>
#include <set>
#include <sstream>

int main () {

	std::set <std::string> myset;
	std::string str;
	std::stringstream ss;
	while (getline (std::cin, str)) {
		myset.clear ();
		ss.clear ();
		if (str[0] == '#') {
			break;
		}
		// std::cout << str << std::endl << std::endl;
		ss << str;
		while (ss >> str) {
		// std::cout << str << std::endl;
			if (myset.count (str) == 0) {
				myset.insert (str);
			}
		}
		std::cout << myset.size () << std::endl;
	}


	return 0;
}