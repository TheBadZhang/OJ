#include <iostream>
#include <bitset>
#include <cmath>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;
using ll = long long;

void f (string str1, string str2) {
	if (str1.size() > 0) {
		char root = str2[str2.size() - 1];
		cout << root;
		int k = str1.find(root);
		f(str1.substr(0, k), str2.substr(0, k));
		f(str1.substr(k + 1), str2.substr(k, str2.size() - k - 1));
	}
}
int main () {
	string str1, str2;
	cin >> str1 >> str2;
	f (str1, str2);
	return 0;
}
