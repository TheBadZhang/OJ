#include<iostream>
#include<string>

using namespace std;

const int N=2e5+10;
int ne[N];

int main () {
	int t,n;
	string s;
	cin >> t;
	while (t--) {
		cin >> n >> s;
		int ans = 0;

		ne[0] = -1;
		for (int i = 0, j = -1; i < n;) {
			if (j==-1 || s[i]==s[j]) {
				i++,j++;
				ne [i] = j;
				if (ne [i] > 0)
					ans++;          //不为零则有前缀匹配
			} else
				j = ne[j];
		}
		ans += n;                   //0~n 每个前缀都出现一次
		cout << ans%10007 << endl;  //别忘了取模
	}
	return 0;
}