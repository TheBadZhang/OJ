#include<cstdio>

char a[300],d,e,f,j,p;


int main() {

	int p1, p2, p3, i = 0,k;
	scanf("%d%d%d%s", &p1, &p2, &p3, a);

	for (; a[i]; i ++) {
		d = a [i-1], e = a [i+1], f = a [i];

		if (f=='-' && e > d && (d >= '0' && e <= '9' || d >= 'a' && e <= 'z')) {//左边的字母序小于右边的字母序 
			for(p3==1?j=d+1:j=e-1;p3==1?j<e:j>d;p3==1?j++:j--) {
			//用三目运算符是实现的控制-- 可以分解为两种for循环 即p3=1时顺序不变等于2时倒序 
				p = j;//把j字符赋值给p 
				if (p1 == 2)
					p = (p>='a') ? p-32 : p;
				else if (p1 == 3)
					p='*';

				for(k=0;k<p2;k++) printf("%c",p);
				//控制输出的个数 
			}
		}
		else printf("%c",f);
			//否则直接输出原来的字母序 

	} 
	return 0;
}