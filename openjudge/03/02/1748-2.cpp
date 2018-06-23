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

	
	while (true) {
	
		int n, m;
		M *l = new M;
		l -> next = l;
		l -> id   = 1;
		std::cin >> n >> m;
		
		if (n == 0 && m == 0) { return 0; }
		// 判断是否输入完毕
		else {
			M *t = l;
			
			for (int a = 2; a <= n; a += 1) {
				AddNode (t, a);
				t = t -> next;
			}


			while (l -> next != l) {
				for (int a = 1; a < m; a += 1) {
					l = l -> next;
				}
				// l = l -> next;
				DelNode (l);
			}
			// std::cout << "complete delete" << std::endl;
			std::cout << l -> id << std::endl;
			
		}
		delete l;
		// 请空内存
	}






	return 0;
}