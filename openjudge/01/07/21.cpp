#include <string>
#include <iostream>

int main () {

	std::string str1, str2, str3;
	std::getline (std::cin, str1);
	std::cin >> str2 >> str3;
	int pos = 0;
	str1 = ' ' + str1 + ' ';
	str2 = ' ' + str2 + ' ';
	str3 = ' ' + str3 + ' ';
	while (std::string::npos != str1.find (str2, pos)) {
		// std::string t;
		// str1 >> t;
		pos = str1.find (str2, pos);
		int length = str2.size ();
		// if (! (str1 [pos] == ' ' && str1 [pos+length] == ' ')) {
		// 	break;
		// }
		str1.erase (pos, pos + length);
		str1.insert (pos, str3);
		pos += length > str3.size () ? length : str3.size ();
	}
	std::cout << str1.substr (1, str1.size ()-1);

	return 0;
}

