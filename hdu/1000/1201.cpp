#include <cstdio>
int leapyear(int year) {
	if(year%4==0 && year%100!=0 || year%400==0) return 1;
	else return 0;
}
//自定义函数，判断年份是闰年还是平年

int main() {
	int t,y,year,month,day;
	int sum;
	//变量sum统计从出生到18岁所经过的天数

	scanf("%d",&t);
	while(t--) {
		scanf("%d-%d-%d",&year,&month,&day);
		//输入生日的年，月，日
		if( month==2 && day==29) printf("-1\n");  //2月29日出生，则输出-1
		else {
			sum=0;
			if(month>=3) { //月份大于2，  该年后一年的平或润 决定过一岁度过的天数
				for(y=year+1;y<=year+18;y++) { //注意for循环中的范围，都是向后移一年
					if(leapyear(y)) sum+=366;
					else sum+=365;
				}
			} else if(month<=2) {          //月份小于等于2，该年的平或润 决定过一岁度过的天数
				for(y=year;y<=year+17;y++) { //注意for循环中的范围，当前年份
					if(leapyear(y)) sum+=366;
					else sum+=365;
				}
			}
			printf("%d\n",sum);
		}
	}
	return 0;
}