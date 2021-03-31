#include <iostream>
using namespace std;
long long a[505];

int main() {
	a[1]=1;
	for(int i=2;i<=501;i++) {
		a[i]=a[i-1]+i*(i-1)/2+2*i-1;
		int k=i-3,sum=0;
		while(k>0) {
			sum+=k;
			k-=2;
		}
		a[i]+=sum;
	}
	int n;
	while(cin>>n) {
		cout<<a[n]<<endl;
	}
	return 0;
} 