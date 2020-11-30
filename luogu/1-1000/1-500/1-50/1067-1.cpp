using namespace std;
#include<iostream> 
#include<cstdlib>
#include<cstdio>
#include<string>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,n,xs,s[140];
    cin>>n;
    for(a=n;a>=0;--a)
    {
        cin>>xs;                        //输入系数
        if(xs!=0)                        //如果系数不为0，则进行操作
        {
            if(a!=0)                     //判断是否为首项
{                                          
if(a==n)                    //是否为常数项
            {
                if(xs==1)                //系数是否是1或-1
                cout<<"x";
                else if(xs==-1)
                cout<<"-x";
                     else
                cout<<xs<<"x";
                if(a>1)
                cout<<"^"<<a;
            }
            else
            {
                if(xs>0)
                cout<<"+";
                else
                cout<<"-";
                if(abs(xs)!=1) 
                {
                    cout<<abs(xs)<<"x";
                }
                else
                cout<<"x";
                 if(a>1)
                cout<<"^"<<a;
            }
           }
           else
           {
               if(xs>0)
               cout<<"+";
               cout<<xs;
           }
        }
    }
}