#include <iostream>
#include <cmath>
using namespace std;
typedef unsigned long long ull;


ull s2n (string str) {
	ull num = 0;
	for (int a = 0; a < str.size (); a += 1)
		num += (str [a] - '0') * pow (10, str.size () - 1 - a);
	return num;
}

int main () {

	string str;
	int n, k;
	cin >> n;
	
	for (int a = 0; a < n; a += 1) {
		cin >> str >> k;
		for (int z = 0; z < k; z += 1) {
			int min = 99;
			ull m = 1e10;
			for (int b = 0; b < str.size (); b += 1) {
				ull t = s2n (str.substr (0,b)+str.substr (b+1));
				if (m > t) {
					m = t;
					min = b;
				}
			}
			str.erase (min,1);
		}
		cout << str << endl;
	}


	return 0;
}