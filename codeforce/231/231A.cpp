#include <iostream>
#include <string>

using namespace std;
using ll = long long;
using ull = unsigned long long;




int main () {
	
	int n, count = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int a,b,c;
		scanf ("%d%d%d", &a,&b,&c);
		if (a+b+c >= 2) {
			count ++;
		}
	}
	printf ("%d\n", count);
	
	return 0;
}
