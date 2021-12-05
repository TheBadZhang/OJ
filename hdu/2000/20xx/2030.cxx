#include <iostream>
#include <string>

using namespace std;

int main () {

	string str;
	int t;

	cin >> t;
	getchar ();
	while (t--) {
		int count = 0;
		getline (cin, str);
		for (int i = 0; i < str.size (); i++) {
			if (str[i] < 0 || str[i] > 127) {
				count ++;
			}
		}
		cout << count/2 << endl;
	}



	return 0;
}