#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int find_no(char *ch) {
	int i, flag = 1;
	i = strlen(ch);
	if (ch[i - 8] == ' ' && ch[i - 7] == 'n' && ch[i - 6] && ch[i - 5] == ' ') 
		flag = 0;
	return flag;
}

int main() {
	char data[120][120];
	int n, i, j, sum_1, sum_2, k;
	while (cin >> n) {
		getchar();
		if (n == 0)
			break;
		sum_1 = 0;
		sum_2 = 0;
		k = n;
		for (i = 1; i <= n; i++)
			gets(data[i]); //二维字符数组输入
		if (n % 2 != 0)
			k = n + 1;				 //这只是为了写1 2 3 方便
		for (j = 1; j <= k / 2; j++) //接下来是打分表
			cout << j << " ";
		cout << "Score" << endl;
		for (i = 1; i <= n; i += 2) {
			if (find_no(data[i])) {
				cout << "O"
					 << " ";
				sum_1++;
			}
			else
				cout << "X"
					 << " ";
		}
		cout << sum_1 << endl;
		for (i = 2; i <= n; i += 2) {
			if (find_no(data[i])) {
				cout << "O"
					 << " ";
				sum_2++;
			}
			else
				cout << "X"
					 << " ";
		}
		if (k != n)
			cout << "-"
				 << " ";
		cout << sum_2 << endl;
	}
	return 0;
}