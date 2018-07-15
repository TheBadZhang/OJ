#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


int main () {

	std::vector <std::string> l;
	std::string str, strt;
	int n, p = -1;
	std::cin >> str >> n;
	std::getline (std::cin, strt);
	for (int a = 0; a < n; a ++) {
		std::getline (std::cin, strt);
		l.push_back (strt);
	}


	if (str == "inc") {
		std::sort (l.begin (), l.end (), std::less <std::string> ());
	} else if (str == "dec") {
		std::sort (l.begin (), l.end (), std::greater <std::string> ());
	} else if (str == "ncinc") {
		auto f = [] (std::string a, std::string b) -> bool {
			std::transform (a.begin (), a.end (), a.begin (), tolower);
			std::transform (b.begin (), b.end (), b.begin (), tolower);
			return a < b;
		};
		std::sort (l.begin (), l.end (), f);
	} else if (str == "ncdec") {
		auto f = [] (std::string a, std::string b) -> bool {
			std::transform (a.begin (), a.end (), a.begin (), tolower);
			std::transform (b.begin (), b.end (), b.begin (), tolower);
			return a > b;
		};
		std::sort (l.begin (), l.end (), f);
	}


	for (auto s : l) {
		std::cout << s << std::endl;
	}

	return 0;
}