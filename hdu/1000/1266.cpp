#include <iostream>
#include <cmath>
using namespace std;



int main() {
	int n;
	cin >> n;
	while (n--) {
		int num; //输入
		cin >> num;

		if (num == 0) { //输入为0
			cout << 0 << endl;
			continue;
		}

		int temp = abs(num); //转换为绝对值
		int count = 0; //末尾0的个数
		while (temp % 10 == 0) { //计算末尾0的个数，并将其去除
			++count;
			temp /= 10;
		}

		if (num < 0) //输入为负数，输出负号
			cout << "-";
		while (temp > 0) {  //输出正数的逆向
			cout << temp % 10;
			temp /= 10;
		}
		while (count--) //输出末尾的0
			cout << 0;
		cout << endl;
	}
	return 0;
}