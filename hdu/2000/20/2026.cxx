#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main () {

	string str;
	while (getline (std::cin, str)) {
		str [0] = toupper (str [0]);
		for (int i = 1; i < str.size (); i++) {
			if (str[i-1] == ' ') {
				str[i] = toupper(str[i]);
			}
		}
		cout << str << endl;
	}



	return 0;
}