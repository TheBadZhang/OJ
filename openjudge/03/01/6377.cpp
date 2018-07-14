#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
//http://noi.openjudge.cn/ch0301/6377/
//注意stu里面字符串要用string,不能用char数组，因为数组不能直接比较
//char数组比较字典序，比较的是第一个字符
struct stu
{
	string a;
	int mon;
	int day;
};
int n;
stu s[200];
bool myless(stu x, stu y)
{
	int len1 = x.a.size(), len2 = y.a.size();
	if (x.mon != y.mon)
		return x.mon < y.mon;
	else if (x.mon == y.mon && x.day != y.day)
		return x.day < y.day;
	else if (x.mon == y.mon && x.day == y.day && len1 != len2)
		return len1 < len2;
	else
		return x.a < y.a;
}
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s[i].a >> s[i].mon >> s[i].day;
	}
	sort(s, s + n, myless);
	int i = 0, flag = 0;
	while (i < n)
	{
		if (s[i].mon == s[i + 1].mon && s[i].day == s[i + 1].day)
		{
			flag = 1;
			cout << s[i].mon << " " << s[i].day << " " << s[i].a << " ";
			while (i < n && s[i].mon == s[i + 1].mon && s[i].day == s[i + 1].day)
			{
				i++;
				cout << s[i].a << " ";
			}
			cout << endl;
		}
		else
		{
			i++;
		}
	}
	if (flag == 0)
		cout << "None" << endl;
}