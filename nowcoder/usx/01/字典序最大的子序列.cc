#include <string>
#include <iostream>
#include <algorithm>

using namespace std;
int main() {

	string str, strr = "";
	cin >> str;
	char maxch = -1;
	for (int i = str.size() - 1; i >= 0; --i)
		if(str[i] >= maxch) strr.push_back(maxch=str[i]);
	reverse (strr.begin(), strr.end());
	cout << strr;
	return 0;
}
