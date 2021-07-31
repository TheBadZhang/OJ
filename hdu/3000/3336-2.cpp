#include <iostream>

using namespace std;


#define M
#define N 128
int dp[M][N];
string pat;

void kmp (string _pat) {
	pat = _pat;
	int m = pat.size ();
	// dp[状态][字符] = 下个状态
	// 基状态
	dp [0][pat[0]] = 1;
	// 影子状态 x 初始化为 0
	int x = 0;
	// 构建状态转移图
	for (int j = 1; j < m; j++) {
		for (int c = 'a'; c <= 'z'; c++) {
			dp [j][c] = dp [x][c];
		}
		dp [j][pat[j]] = j+1;
		// 更新影子状态
		x = dp[x][pat[j]];
	}
}

int search (string txt) {
	int m = pat.size ();
	int n = txt.size ();

	int j = 0;
	for (int i = 0; i < N; i++) {
		j = dp[j][txt[i]];
		if (j == M)
	}
}


int main () {

	std::string txt;
	string prefix;




	return 0;
}