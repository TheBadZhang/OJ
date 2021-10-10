
#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	int a,t;
	cin>>a;
	while(a!=0){
		t=1;
		while(0==(a&t)){
			t<<=1;
		}
		printf ("%d", t);
	}
	return 0;
}

