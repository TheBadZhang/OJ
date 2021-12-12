#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdio>

using namespace std;

const int MAXN = 100001;
char Arr[MAXN];
int cnt[26];

int main () {
	//cout << "Hello world!" << endl;
	//freopen("input.txt","r",stdin);
	while (gets(Arr)) {
		memset(cnt, 0, sizeof(cnt));
		int len = strlen(Arr);
		for (int i = 0; i < len; i++) {
			if (Arr[i] >= 'a' && Arr[i] <= 'z') {
				cnt[Arr[i] - 'a']++;
			}
			//else continue;
		}
		for (int i = 0; i < 26; i++) {
			printf("%c:%d\n", i + 'a', cnt[i]);
			//cout<<cnt[i]<<endl;
		}
		cout << endl;
	}
	return 0;
}