#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main(){
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int k = n/2;
		for (int i = k; i > 0; i--) {
			for (int j = i; j <= n; j += k) {
				printf("%d ", j);
			}
		}
		puts("");
	}
	return 0;
}