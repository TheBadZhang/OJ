#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	while (N--) {
		int num;
		cin >> num;
		int total = 0; //输出的总数量
		while(num != 1) {
			if (num % 2 == 1) { //奇数
				if (total > 0)
					cout << " ";
				cout << num;
				num = num * 3 + 1;
				++total;
			}
			else //偶数
				num /= 2;
		}
		if (total == 0)
			cout << "No number can be output !";
		cout << endl;
	}
	return 0;
}