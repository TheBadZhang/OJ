#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
int js(char a[21],char b[1000000]);

int main() {
	char a[21],b[1000000];
	gets(a);
	gets(b);
	js(a,b);
	return 0;
}
int js(char a[21],char b[1000000]) {
	int s=0,ss=0;
	for(int i=0;i<strlen(b)-strlen(a);i++) {
		int j; 
		for(j=0;j<strlen(a);j++) {
			if(toupper(b[i+j])!=toupper(a[j]))
				break;
			if(i>0&&b[i-1]!=' ')
				break;
		}
		if((j==strlen(a))&&(b[j+i]==' '||j+i==strlen(b))) {
			s++;
			if(s==1)
			ss=i;
		}
	}
	if(s==0)
		cout<<"-1"<<endl;
	else
		cout<<s<<" "<<ss<<endl;
	return 0;
}