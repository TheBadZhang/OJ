#include <iostream>
#include <cstring>
using namespace std;

int card[1005]; //牌是谁的，1代表是自己的，0代表是对手的

int main() {
	int Case = 1; //测试用例数
	int m, n;
	while (cin >> m >> n) {
		if (m == 0 && n == 0)
			break;

		memset(card, 0, sizeof(card));
		int num;
		for (int i = 0; i < n; i++) {//存储自己的牌
			cin >> num;
			card[num] = 1;
		}

		int win = 0; //最少获胜次数
		int enemy = 0; //对手大牌的数量
		for (int i = m * n; i > 0; i--) {
			if (card[i] == 1) {
				if (enemy == 0)
					++win;
				else
					--enemy;
			} else
				++enemy;
		}
		cout << "Case " << Case++ << ": " << win << endl;
	}
	return 0;
}