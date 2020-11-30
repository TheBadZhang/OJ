#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int n,x,y,ans = -1;  //最开始赋值答案为-1那么就可以输出没有地毯的情况了 
struct dt{
    int x,y,d1,d2;
}all[10000+10];
int main()
{
    cin>>n;
    for(int i = 1;i<=n;i++)
        cin>>all[i].x>>all[i].y>>all[i].d1>>all[i].d2;
    cin>>x>>y;
    for(int i = 1;i<=n;i++)
    {
        int tmpx = all[i].x + all[i].d1;
        int tmpy = all[i].y + all[i].d2;
        if(x<=tmpx&&x>=all[i].x&&y<=tmpy&&y>=all[i].y) ans = i;//判断并且更新答案 
    }
    cout<<ans<<endl;
    return 0;
}