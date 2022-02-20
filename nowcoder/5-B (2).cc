class Solution {
public:
    /**
     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
     *
     * ����һ����׺���ʽ���������Ľ��
     * @param str string�ַ���
     * @return long������
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
