#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;
const int maxn=1000005;
typedef long long LL;
LL a[maxn];
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		LL max1=0;
		LL sum=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			sum+=a[i];
			max1=max(a[i],max1);
		}
		if(max1-1>sum-max1)cout<<"No"<<endl;
		else cout<<"Yes"<<endl;
	}
}