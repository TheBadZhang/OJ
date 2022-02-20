#include <iostream>
#include <string>

using namespace std;
using ll = long long;
using ull = unsigned long long;




int main () {
	
	int a;
	cin >> a;
	for (int i = 0; i < a; ++i) {
		string str;
		cin >> str;
		if (str.size() > 10) {
			printf ("%c%d%c\n",str[0],str.size()-2,str[str.size()-1]);
		} else {
			printf ("%s\n", str.c_str());
		}
	}
	
	return 0;
}
