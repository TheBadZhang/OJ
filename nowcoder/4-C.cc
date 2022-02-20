#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>

using ll = long long;
using namespace std;

const int MAX = 1e2 + 7;

int dir[6][3] = {{1, 0, 0}, {-1, 0, 0}, {0, 1, 0}, {0, -1, 0}, {0, 0, 1}, {0, 0, -1}};
int visited[MAX][MAX][MAX], mp[MAX][MAX][MAX], n;
struct Node {
	int x, y, z, eat;
};

bool judge(const Node& next) {
	//判墙或者不能走的节点或是走过
	return !(mp[next.x][next.y][next.z] || visited[next.x][next.y][next.z]);
}
int dfs() {
	memset(visited, 0, sizeof(visited));
	visited[1][1][1] = 1;
	Node top;
	top.x = 1;
	top.y = 1;
	top.z = 1;
	top.eat = 1;
	queue<Node> q;
	q.push(top);
	while (!q.empty()) {
		top = q.front();
		q.pop();
		if (top.x == n && top.y == n && top.z == n) return top.eat;
		for (int i = 0; i < 6; i++) {
			Node next;
			next.x = top.x + dir[i][0];
			next.y = top.y + dir[i][1];
			next.z = top.z + dir[i][2];
			next.eat = top.eat + 1;
			if (judge(next)) {
				q.push(next);
				visited[next.x][next.y][next.z] = 1;
			}
		}
	}
	return -1;
}



int main() {

	cin >> n;
	memset(mp, -1, sizeof(mp));
	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				char ch;
				cin >> ch;
				if (ch == '.') mp[i][j][k] = 0;
			}
		}
	}
	cout << dfs() << endl;
	return 0;
}
