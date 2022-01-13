#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <algorithm>

using namespace std;

int main () {
	
	int p1, p2, p3;
	string str, strr = "", strmid;
	cin >> p1 >> p2 >> p3 >> str;
	
	for (int i = 0; i < str.size(); ++i) {
		if (str[i] != '-') {   // 判断是否为 -
			strr.push_back(str[i]);
		} else if ((isalpha(str[i-1])&&isalpha(str[i+1]))||(isdigit(str[i-1])&&isdigit(str[i+1]))) {
			// 是 -、且两边类型相同
			if (str[i-1] >= str[i+1]) {  // 如果前面的字符大于等于后面的
				strr.push_back('-');     // 保留 -
			} else if (str[i-1] == str[i+1]-1 ) {

			} else {  // 否则
				char start = str[i-1]+1, end = str[i+1]-1;
				
				if (p1 == 1) {   // 小写字母
					start = tolower(start);
					end = tolower(end);
				} else if (p1 == 2) {         // 大写字母
					start = toupper(start);
					end = toupper(end);
				} else {
					strr += string(p2*(end-start+1), '*');
					continue;
				}
				strmid = "";
				for (char ch = start; ch <= end; ++ch) {
					strmid += string(p2, ch);
				}
				if (p3 == 2) {
					reverse (strmid.begin(), strmid.end());
				}
				strr += strmid;
			}
		} else {
			strr.push_back('-');
		}
	}

	cout << strr << endl;
	
	
	return 0;
}