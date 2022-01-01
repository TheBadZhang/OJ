#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int dp[110][110];
int field[110][110];

int dir[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
int R,C;

int dfs (int x, int y) {
    if (dp[x][y] != -1) return dp[x][y];
    int ans = 0;
//    printf ("%d %d\n", x, y);
    for (int i = 0; i < 4; i++) {
        int xx = x + dir[i][0];
        int yy = y + dir[i][1];
//        printf ("xx:%d yy:%d dpxy:%d dpxxyy:%d\t", xx, yy, dp[x][y], dp[xx][yy]);
        if (xx >= 0 && xx < R && yy >= 0 && yy < C && field[x][y] > field[xx][yy]) {
//        	printf ("yep   ");
            ans = max (ans, dfs (xx, yy));
        }
    }
    dp[x][y] = ans+1;
//    printf ("dpxy:%d", dp[x][y]);
    return dp[x][y];
}

int main () {
    
    cin >> R >> C;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf ("%d", &field[i][j]);
            dp [i][j] = -1;
        }
    }
    int ans = 0;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            ans = max (ans, dfs(i,j));
        }
    }
    cout << ans << endl;
    
    
    
    
    return 0;
}
