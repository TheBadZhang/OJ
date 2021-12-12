/* HDU1234 开门人和关门人 */

#include <stdio.h>
#include <string.h>

int main()
{
	int n, m;
	int h, mi, s;

	char startname[20];
	char endname[20];
	int minstarttime;
	int maxendtime;

	char name[20];
	int starttime;
	int endtime;

	// 读入总天数（测试组数）
	scanf("%d", &n);
	while(n--) {
		// 读入记录数
		scanf("%d", &m);

		// 设置暂时的最小开门时间和最大关门时间
		minstarttime = 24 * 3600;
		maxendtime = 0;

		// 读入各个记录，并且求最小开门时间和最大关门时间
		for(int i=1; i<=m; i++) {
			scanf("%s %d:%d:%d", name, &h, &mi, &s);
			starttime = s + mi * 60 + h * 3600;
			if(starttime < minstarttime) {
				minstarttime = starttime;
				strcpy(startname, name);
			}

			scanf("%d:%d:%d", &h, &mi, &s);
			endtime = s + mi * 60 + h * 3600;
			if(endtime > maxendtime) {
				maxendtime = endtime;
				strcpy(endname, name);
			}
		}

		// 输出结果
		printf("%s %s\n", startname, endname);
	}

	return 0;
}