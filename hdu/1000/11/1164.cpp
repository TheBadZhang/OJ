
#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[]) {
	int x,i,t;
	bool tag;
	while(cin>>x) {
		t=sqrt(x);
		tag=false;
		for(i=2;i<=t;i++) {

			while(x%i==0) {
				x/=i;
				if(tag==false) {
					cout<<i;
					tag=true;
				}else cout<<'*'<<i;

			}
		}
		if(x!=1) {
			if(tag==true) cout<<'*'<<x;
			else cout<<x;
		}
		cout<<endl;
	}
	return 0;
}