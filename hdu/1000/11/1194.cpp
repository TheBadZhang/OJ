#include <iostream>
#include <stdio.h>
using namespace std;


int main() {
	//freopen("in.txt","r",stdin);
	int x,y,a,b;
	int T;
	scanf("%d",&T);
	while(T--){
		scanf("%d%d",&a,&b);
		if(a<b)printf("impossible\n");
		else if((a-b)&1)printf("impossible\n");
		else {
			x=(a+b)/2;
			y=(a-b)/2;
			printf("%d %d\n",x,y);
		}
	}
	return 0;
}