#include<cstdio>

int n,m,da,date,ans;
int s[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};

int main () {
	scanf ("%d%d", &n, &m);
	// 将年份倒转判断日期是否合法
	// 将日期反转成年份！
	for (int i = 1; i <= 12; ++i) {
		for (int j = 1; j <= s[i]; ++j) {
			da = (j%10)*1000+(j/10)*100+(i%10)*10+(i/10);
			date = da*10000+i*100+j;
			// 判断是否在日期中
			if (date < n || date > m) continue;
			ans++;
		}
	}
	printf ("%d\n", ans);
	return 0;
}