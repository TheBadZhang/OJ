#include<cstdio>
#include<cstring>
using namespace std;

int main(){

	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d%d",&n,&m);
		if(n==m||n-2==m)
		{
			if(n&1)
			printf("%d\n",n+m-1);
			else printf("%d\n",n+m);
		}
		else printf("No Number\n");

	}
	return 0;
}