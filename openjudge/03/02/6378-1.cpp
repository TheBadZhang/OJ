#include <iostream>

struct M {
	int id;
	M *next;
};

void AddNode (M *l, int n) {
	M *t = new M;
	t -> next = l -> next;
	l -> next = t;
	t -> id = n;
}

void DelNode (M *l) {
	M *t = l -> next;
	// 存储下一个节点的指针
	l -> id = t -> id;
	// 复制数据
	l -> next = t -> next;
	// 链接下下个节点
	delete t;
	// 删除节点，释放内存
}

int main (int argc, char *argv[]) {

	
		int n, m;
		M *l = new M;
		l -> next = l;

		std::cin >> n >> l -> id;

		M *t = l;

		for (int a = 0; a < n - 1; a += 1) {
			std::cin >> m;
			AddNode (t, m);
			t = t -> next;
		}
		std::cin >> m;
		// 再用做存储需删除的数字
		t = l;

		for (int a = 0; a < n; a += 1) {
			// MDZZ 我，把循环条件写成了 a < m
			// ……………………
			if (t -> id == m) {
				DelNode (t);
				// std::cout << " ss ";
			} else {
				// std::cout << " s ";
				std::cout << t -> id << " ";
				t = t -> next;
			}
		}
			
		
		// delete l;
		// 请空内存


	return 0;
}