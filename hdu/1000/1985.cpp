
#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>

using namespace std;

int main() {
	int t;
	int Case = 0;
	cin >> t;
	while (t--) {
		double m;
		string str;
		cin >> m >> str;
		if (str == "kg")
			printf("%d %.4lf lb\n", ++Case, m * 2.2046);
		if (str == "l")
			printf("%d %.4lf g\n", ++Case, m * 0.2642);
		if (str == "lb")
			printf("%d %.4lf kg\n", ++Case, m * 0.4536);
		if (str == "g")
			printf("%d %.4lf l\n", ++Case, m * 3.7854);
	}
	return 0;
}