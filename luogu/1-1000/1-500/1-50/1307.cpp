#include<stdio.h>
int main()
{
    int N;//输入
    int S=0;//输出新数
    int a=0;//解析出的个位数
    int T=0;//判断是否为负数
    scanf("%d",&N);//输入N
    if(N<0) //判断N是否为负数
    {
        N=0-N; //N先取正
        T=1; //T值为1时，N是负数
    }
    for (int i=0;i<10;i++) 
    {
        int b=N/10; //为解析出N的个位数做准备
        a=N-b*10; //解析出N的个位数为a
        N=N/10;//去掉已解析出来的个位数,N降一位
        S=S+a;//把已解析的a和累加的S赋值给新数
        S=S*10;//新数升一位
        if (N<10)//判断N是否降到个位；
        {
            a=N;
            S=S+a;
            break;
        }
    }
    if(T==1)//判断当T等于1时，S是负数
    {
        S=0-S;
    }
    printf("%d\n",S);
    return 0;
}