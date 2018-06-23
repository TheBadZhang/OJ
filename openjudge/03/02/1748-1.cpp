// 此解法基于 std::vector
// 并没有使用最好的选择——循环链表
// 我将会在第二个程序中写上链表解决方法



#include <iostream>
#include <vector>


int main () {
	
	std::vector <int> l;
	int n, m;
	
	while (true) {
		
		std::cin >> n >> m;
		
		if (n == 0 && m == 0) { break; }
		// 判断是否输入完毕
		else {
			int t = 0;
			// 标记目前位置
			for (int a = 1; a <= n; a += 1)
				l.push_back (a);
			// 给猴子们排座位
			// std::cout << l.size() << std::endl;
			while (l.size () > 1) {
				// 只要座位数 > 1，不断扔猴子
				t += m - 1;
				// 数 m 个猴子过去，由于用的 vector
				// 相当于后面的猴子自动填充了上面的位置
				// 故减一
				if (t >= l.size ()) t %= l.size (); 
				// 如果 t 不在座位上，对剩余猴子数进行取余
				// 得到最终位置
				l.erase (l.begin () + t);
				//扔掉这个位置上的猴子
			}
			// std::cout << "complete delete" << std::endl;
			std::cout << l [0] << std::endl;
			l.erase (l.begin (), l.end ());
			// 扔掉所有猴子，防止输入错误
			
		}
	}
	
	return 0;
}