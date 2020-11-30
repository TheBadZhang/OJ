#include<cstdio>//头文件
int main()
{
    int a,b,c;//a角b分，c用来存储铅笔的数量，当然也可以不用c直接a=a/19;
    scanf("%d %d",&a,&b);//输入班主任给小玉的钱数
    a=a*10+b;//换算单位
    c=a/19;//由于a、c都是int类型，所以自动舍去余数
    printf("%d",c);
    return 0;
}