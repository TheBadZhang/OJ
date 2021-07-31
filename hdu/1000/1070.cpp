#include<iostream>
#include<cstring>
using namespace std;
int main() {
	int T,N,volume;
	double price;
	char name[105],Tname[105];
	cin>>T;
	for(;T--;) {
		double value=99999999,volume1;
		cin>>N;
		for(;N--;) {
			cin>>name;
			cin>>price;
			cin>>volume;
			if(volume>=200) {
				volume-=volume%200;
				double k=volume/200;
				if(k>5.00)k=5.00;
				double kk=price/k;
				if(kk<value||(kk==value&&volume>volume1)) {
					value=kk;
					volume1=volume;
					strcpy(Tname,name);
				}
			}
		}
		cout<<Tname<<endl;
	}
}