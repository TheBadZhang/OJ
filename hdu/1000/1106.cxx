#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>


int main () {

	std::stringstream ss;
	std::string str;
	std::vector <int> v;
	while (getline (std::cin, str)) {
		std::transform (str.begin(), str.end(), str.begin(), [](char ch){ return ch == '5' ? ' ' : ch; });
		ss << str;
		while (ss >> str) {
			v.push_back (std::stoi(str));
		}
		ss.clear ();
		std::sort (v.begin (), v.end ());
		for (int i = 0; i < v.size(); ++i) {
			if (i) printf (" ");
			printf ("%d", v[i]);
		}
		v.clear ();
		printf ("\n");
	}

	return 0;
}