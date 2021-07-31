
#include<iostream>

using namespace std;

int main() {

	long long int n,a[22];
	a[1] = 0;
	a[2] = 1;
	while( cin >> n) {
		for(int i = 3;i <= n;i ++)
			a[i] = (i-1)*(a[i-1]+a[i-2]);
		cout << a[n] << endl;
	}
	return 0;
}