#include <iostream>
#include <vector>
#include <string>
#include <sstream>

int main () {

	int n;
	std::string str;
	std::vector <int> list;
	std::cin >> str;
	std::stringstream sstr;
	sstr << str;
	while (getline (sstr, str, '5'))
	// while (~scanf ("%d5",))


	return 0;
}