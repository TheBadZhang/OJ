// 写过一段可能能用的代码，但是总是超时，怎么优化也没用……；
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int n,m,a[11111],st,x[11111][111],xx[11111][111],xxx[11111][111]; 
int b[11111];
int main()
{
scanf("%d%d",&n,&m);
for(int i=1;i<=n;i++)
{
memset(a,0,sizeof(a));
memset(b,0,sizeof(b));
int s=0;
for(int j=0;j<m;j++)
{
int yy,y;

scanf("%d%d",&yy,&y);
if(yy==1)
{
s++;
a[++a[0]]=j;
b[j]=a[0];
}
xx[i][j]=yy;
x[i][j]=y;
}
for(int j=0;j<m;j++)
{
int jj=j;
while(!xx[i][jj])
{
jj++;
if(jj==m)
jj=0;
}
int bb=b[jj]-1;
int z=x[i][j]%s;
z=(z+bb)%s;
if(z==0) z=a[0];
xxx[i][j]=a[z];
}
}
scanf("%d",&st);
int c=1;
int q,sum=0;
while(c<=n)
{
q=xxx[c][st];
sum=(sum%20123+x[c][st]%20123)%20123;
c++;
st=q;
}
printf("%d",sum%20123);
}