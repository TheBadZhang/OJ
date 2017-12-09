#include <iostream>
#include <string>


int main () {

	std::string str, max, min('c',100);
	bool flag = false;
	while (std::cin >> str) {
		if (str.size () > max.size ())
			max = str;
		if (str.size () < min.size ())
			min = str;
	}
	std::cout << max << "\n" << min;
	return 0;
}