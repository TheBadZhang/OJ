#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <stack>
#include <string>
#include <queue>
#include <map>

using namespace std;
using ll = long long;
#define FOR(x, b, e) for (int x = b; x <= e; ++x)
#define ROF(x, b, e) for (int x = b; x >= e; --x)
#define FOR0(x, b, e) for (int x = b; x < e; ++x)
#define ROF0(x, b, e) for (int x = b; x > e; --x)
const int N = 1e6 + 10;

priority_queue<int, vector<int>, less<int>> q1;     // �����
priority_queue<int, vector<int>, greater<int>> q2;  // С����
// С���Ѵ����λ��������֣�����Ѵ����λ��С������

int main() {
	int p, temp;
	scanf ("%d", &p);
	while (p--) {
		while (!q1.empty()) q1.pop(); //���
		while (!q2.empty()) q2.pop();
		int id, num;
		scanf ("%d %d %d", &id, &num, &temp);
		printf("%d %d\n%d ", id, (num >> 1) + 1, temp);
		q1.push(temp); //��Ϊtemp�Ǻ�q1.top()�Ƚϣ��Ȱѵ�һ��������ȥ�Ͳ����ж��Ƿ�Ϊ����
		FOR(i,2,num) {
			scanf ("%d", &temp);
			if (temp <= q1.top()) q1.push(temp);
			else q2.push(temp);
			if (q1.size() > q2.size() + 1) {
				q2.push(q1.top());
				q1.pop();
			}
			if (q2.size() > q1.size()) {
				q1.push(q2.top());
				q2.pop();
			}
			if (i & 1) printf("%d ", q1.top());
			if ((i % 20) == 0) puts("");
		}
		if (num % 20 != 0) puts("");
	}
}
