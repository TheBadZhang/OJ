#include<iostream>
using namespace std;
const int maxn=1000010;
bool prime[maxn+5]= {0};
void shai() {
	for(long long i=2; i<maxn; i++)
		for(long long j=i*i; j<maxn; j+=i)
		{
			prime[j]=1;
		}
}
int main() {
	shai();
	int n;
	while(cin >> n) {
		if(n==0)
			break;

		int ans=0;
		for(int i=2; i<=n/2; i++)
			if(!prime[i]&&!prime[n-i])
				ans++;
		cout<<ans<<endl;
	}
	return 0;
}