#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    int n,r,b,ans[100]={0},node;
    scanf("%d%d",&n,&r);
    b=n;
    node=1;
    while(abs(b)!=0)
    {
        ans[node]=(abs(r)+b%r)%abs(r);//这是关键！！将数取模并且改变正负！！！
        b-=ans[node];
        b/=r;
        node++;
    }
    printf("%d=",n);
    for(int i=node-1;i>=1;i--)
    {
        if(ans[i]>=10)printf("%c",'A'-10+ans[i]);
        else printf("%d",ans[i]);
    }
    printf("(base%d)",r);
    return 0;
}