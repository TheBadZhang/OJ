#include <iostream>
#include <sstream>
#include <string>
#include <map>

int main () {

	std::map <std::string, std::string> dictionary;
	std::string str, str1, str2;
	std::stringstream sstr;
	
	while (std::getline (std::cin, str)) {
		if (str == "") break;
		else {
			sstr.clear ();
			sstr.str (str);
			sstr >> str1 >> str2;
			dictionary [str2] = str1;
		}
	}

	while (std::cin >> str) {
		auto s = dictionary.find (str);
		if (s != dictionary.end ()) {
			std::cout << s -> second << std::endl;
		} else {
			std::cout << "eh" << std::endl;
		}
	}


	return 0;
}