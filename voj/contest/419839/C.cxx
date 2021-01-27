// #include <map>
// #include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <cctype>
#include <set>

int main () {

	std::string str;
	std::stringstream ss;
	// std::map <std::string, int> maps;
	// std::vector <std::string> lists;
	std::set <std::string> sets;
	while (std::getline (std::cin, str)) {
		for (int i = 0; i < str.size (); i++) {
			if (std::isalpha (str[i])) {
				str [i] = std::tolower (str [i]);
			} else {
				str [i] = ' ';
			}
		}
		// std::cout << str << std::endl;
		ss.clear ();
		ss << str;
		while (ss >> str) {
			// std::cout << str << "\t";
			if (str.size ())
				sets.insert (str);
		}
		// std::cout << std::endl;
	}
	// std::cout << sets.size ();
	std::set<std::string>::iterator it = sets.begin ();
	while (it != sets.end ()) {
		std::cout << *it << std::endl;
		it++;
	}


	return 0;
}