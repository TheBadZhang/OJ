#include <iostream>

using namespace std;

int main() {
	int H, U, D, F;
	while (cin >> H >> U >> D >> F) {
		if (H == 0)
			break;
		double reduce = 0.01 * F * U; //每天减少的上爬距离
		double nowH = 0; //当前高度
		double nowU = U; //当前上爬距离
		int day = 0; //天数
		while (true) {
			++day;
			nowH += nowU; //上爬
			if (nowH > H) { //爬出井口
				cout << "success on day " << day << endl;
				break;
			}
			nowH -= D; //下滑
			if (nowH < 0) {//滑回井底
				cout << "failure on day " << day << endl;
				break;
			}
			nowU -= reduce; //上爬距离减少
			if (nowU < 0)
				nowU = 0;
		}
	}
	return 0;
}