#include <iostream>
using namespace std;
using ll = long long;


const int N = 1e1 + 5;
int a[N];
		
int main(){
	
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> a [i];
		}
		if (a [1] == 1) puts("Yes");
		else puts("No");
	}
	return 0;
}