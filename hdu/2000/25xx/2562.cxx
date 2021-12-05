#include <iostream>

using namespace std;

int main () {

	string str;
	int a;
	cin >> a;
	while (a--) {
		cin >> str;
		for (int i = 0; i < str.size (); i += 2) {
			cout << str[i+1] << str[i];
		}
		cout << endl;
	}

	return 0;
}