#include<cstdio>
#include<iostream>
using namespace std;
int n,m,l,r,a,ans,me[1010];
bool fl[1010];
int main()
{
scanf("%d%d",&m,&n);
l=1;r=0;
for(int i=1;i<=n;i++)
{
scanf("%d",&a);
if(!fl[a])
{
if(r-l+1==m)fl[me[l]]=0,l++;
me[++r]=a;fl[a]=1;
ans++; 
}
}
printf("%d",ans);
}