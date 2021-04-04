#include <iostream>
#include <cctype>

using namespace std;

int main () {


	int t;
	cin >> t;
	getchar ();
	string str;
	while (t--) {
		getline (cin, str);
		int sum = 0;
		// cout << isalnum (str[0]);
		if (isdigit (str[0])) {
			cout << "no" << endl;
		} else {
			for (int i = 0; i < str.size(); i++) {
				if (isdigit (str[i]) || isalpha (str[i]) || str[i] == '_') {
					sum++;
				}
			}
			// cout << sum << "  " << str.size() << endl;
			if (sum == str.size ()) {
				printf("yes\n");
			} else {
				printf("no\n");
			}
		}
	}

	return 0;
}