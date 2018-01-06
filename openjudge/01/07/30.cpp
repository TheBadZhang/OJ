#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main () {
	string s1,s2;
	int i, j, ans=0;
	cin >> s1 >> s2;

	if (s1.size () > s2.size ()) swap(s1,s2);
	int L1 = s1.size();
	s1 = s1 + s1;
	s2 = s2 + s2;

	for (i = 0; i < L1; i ++)
		for(j = ans + 1; i + j - 1 < s1.size () && j <= L1;j ++)
			if(s2.find (s1.substr (i, j)) != -1) ans=j;
	printf("%d\n",ans);
	return 0;
}

// 实在是不想写了……，直接抄了
// 道理算是明白了，自己和自己相加，方便字符环计算


