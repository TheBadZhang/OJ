class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 给定一个后缀表达式，返回它的结果
     * @param str string字符串
     * @return long长整型
     */
    long long legalExp(string str) {
        stack<long long> s;
		long long num = 0;
		for (const char& ch:str) {
			if (isdigit(ch)) {
				num = num*10+ch-'0';
			} else if (ch == '#') {
				s.push(num);
				num = 0;
			} else {
				long long a, b;
				a = s.top();
				s.pop();
				b = s.top();
				s.pop();
				if (ch == '+') s.push(a+b);
				if (ch == '-') s.push(b-a);
				if (ch == '*') s.push(a*b);
			}
		}
		return s.top();
    }
};
