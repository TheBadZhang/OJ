#include <stdio.h>
short a[105][105]={0};
int A,B;
inline void boom(int R,int S,int P,int T){
	int up=R-1-P/2,
	    down=R-1+P/2,
	    left=S-1-P/2,
	    right=S-1+P/2;
	up=up<0?0:up;down=down>=A?A:down;
	left=left<0?0:left;right=right>=B?B:right;
	if(!T)T=-1;
	for(int i=up;i<=down;i++)
		for(int j=left;j<=right;j++)
			a[i][j]+=T;
}
int main( ){
	int K,max=0,ans=0;
	scanf("%d%d%d",&A,&B,&K);
	for(int i=0;i<K;i++){
		int r,s,p,t;
		scanf("%d%d%d%d",&r,&s,&p,&t);
		boom(r,s,p,t);max+=t;
	}
	for(int i=0;i<A;i++)
		for(int j=0;j<B;j++)
			if(a[i][j]==max)
				ans++;
	printf("%d",ans);
	return 0;
}