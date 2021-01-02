
/* HDU2034 人见人爱A-B */

#include <iostream>
#include <set>

using namespace std;

int main()
{
	int n, m, val;
	set <int> result;

	while(cin >> n >> m) {
		if(n == 0 && m == 0)
			break;

		result.clear();

		// n个元素放进集合中
		for(int i = 0; i < n; ++i) {
			cin >> val;
			result.insert(val);
		}

		// m个元素，如果在集合中，则删除该元素
		for(int i = 0; i < m; ++i) {
			cin >> val;

			if(result.find(val) != result.end()) {
				result.erase(val);
			}
		}

		// 打印输出结果
		if(result.size() == 0)
			cout << "NULL" << endl;
		else {
			for(int i : result)
				cout << i << " ";
			cout << endl;
		}
	}

	return 0;
}