#include <stdio.h>  //头文件
int a,b,c,d,s,ans;
int main() {
	scanf("%d%d%d%d",&a,&b,&c,&d);  //输入a，b，c，d
	if (d-b<0) {  //这种情况是分钟需要接小时一小时的
		s=c-a-1;
		ans=d-b+60;
	}
	else {  //这种情况是所有的东西都不会退位的
		s=c-a;
		ans=d-b;
	}
	printf("%d %d",s,ans);  //输出答案
}