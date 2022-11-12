#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main () {
	long long t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		long long n, mx = INT_MIN, sum = 0;
		cin >> n;
		vector <long long> a(n), b(n);
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];
		for(int i=0;i<n;i++) mx=max(mx,b[i]);
		for(int i=0;i<n;i++) sum+=(a[i]+b[i]);
		cout<<sum-mx<<endl;
	}
	return 0;
}