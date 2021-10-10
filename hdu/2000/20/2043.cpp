#include <cstdio>
#include <cstring>
#include <cctype>
#include <string>
#include <iostream>

using namespace std;

int main(void) {
	int m, count, f1, f2, f3, f4, len, i;
	string s;
	cin >> m;
	while (m--) {
		cin >> s;

		// 密码检查
		count = 0;
		f1 = f2 = f3 = f4 = 0;
		len = s.size();
		if (8 <= len && len <= 16) {  // 密码长度检查
			for (i = 0; i < len; i++) {
				if (isupper(s[i]))
					f1 = 1;
				else if (islower(s[i]))
					f2 = 1;
				else if (isdigit(s[i]))
					f3 = 1;
				else if (s[i] == '~' || s[i] == '!' || s[i] == '@' || s[i] == '#' || s[i] == '$' || s[i] == '%' || s[i] == '^')
					f4 = 1;

				count = f1 + f2 + f3 + f4;
				if (count >= 3)
					break;
			}
		}

		// 结果输出
		if (count >= 3)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}