#include <iostream>
#include <bitset>
#include <cmath>
#include <vector>
#include <algorithm>
#include <list>
#include <cctype>

using namespace std;
using ll = long long;

const int len = 100100;
int temp[len];
int l[len];
ll counts = 0;
inline int read() {
	int x = 0, f = 1;
	char ch = getchar();
	while (ch < '0' || ch > '9') {
		if (ch == '-')
			f = -1;
		ch = getchar();
	}
	while (ch >= '0' && ch <= '9') {
		x = (x << 1) + (x << 3) + (ch ^ 48);
		ch = getchar();
	}
	return x * f;
}


int main() {
	
	int a=0,b=1,c=0;
	char opr;
	cin >> b;   // b用作
	while (cin >> opr) {
		cin >> c;  // 获取中间的每一段数值
		switch (opr) {  // 如果是 +，将运算符之前的数值累加到结果中
			case '+': a = a%10000 + b%10000; b = c; break;
			            // 如果是 *，将运算符之前的数值和运算符之后的数值进行计算
						// 结果作为一个新的值，保存在 b 中，作为运算符之前的数值
			case '*': b = (b%10000)*(c%10000); break;
		}
	}
	cout << (a+b)%10000;

	return 0;
}