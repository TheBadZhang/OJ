#include <iostream>

using namespace std;

int main() {
	long long n,m;
	while((cin>>m>>n)&&(n||m))
		cout<<n+m-2<<endl;
	return 0;
}