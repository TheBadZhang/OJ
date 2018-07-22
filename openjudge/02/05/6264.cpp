#include <stdio.h>
struct note
{
	int x;
	int y;
	int s;
};
int main()
{
	struct note que[10005];
	char a[105][105] = {0};
	int book[105][105] = {0};
	int next[4][2] = {{0, 1},
					  {1, 0},
					  {0, -1},
					  {-1, 0}};
	int head, tail;
	int i, j, k, n, m, startx, starty, p, q, tx, ty, flag = 0;
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
		scanf("%s", &a[i]);
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
		{

			if (a[i][j] == 'S')
			{
				startx = i;
				starty = j;
			}
			if (a[i][j] == 'T')
			{
				p = i;
				q = j;
			}
		}
	head = 1;
	tail = 1;
	que[tail].x = startx;
	que[tail].y = starty;
	que[tail].s = 0;

	book[startx][starty] = 1;
	tail++;
	flag = 0;
	while (head < tail)
	{
		for (k = 0; k <= 3; k++)
		{
			tx = que[head].x + next[k][0];
			ty = que[head].y + next[k][1];
			if (tx < 0 || tx > n - 1 || ty < 0 || ty > m - 1)
				continue;
			if (a[tx][ty] != '#' && book[tx][ty] == 0)
			{
				book[tx][ty] = 1;
				que[tail].x = tx;
				que[tail].y = ty;
				que[tail].s = que[head].s + 1;
				tail++;
			}
			if (tx == p && ty == q)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			break;
		head++;
	}
	printf("%d", que[tail - 1].s);
	return 0;
}