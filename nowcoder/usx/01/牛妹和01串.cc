#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	string str;
	cin >> str;
	int cnt = 0;
	bool cnt0 = false, cnt1 = false;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '0')
			cnt0 = true;
		else
			cnt1 = true;
		if (cnt0 && cnt1) {
			cnt++;
			cnt0 = false;
			cnt1 = false;
		}
	}
	cout << cnt << endl;
	return 0;
}