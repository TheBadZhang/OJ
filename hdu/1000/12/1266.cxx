#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;

void reverse (const string& s) {
	int i, j, len = s.size();
	i = s.find_last_not_of ('0');
	string str = s.substr (0, i+1);
	reverse (str.begin (), str.end());
	// cout  << " " << i << " " << str << endl;
	cout << str << s.substr (i+1) << endl;
}

int main () {
	int t;
	cin >> t;
	string str;
	while (t--) {
		cin >> str;
		if (str[0] == '-') {
			putchar('-');
			reverse(str.substr (1));
		}
		else reverse(str);
	}
	return 0;
}