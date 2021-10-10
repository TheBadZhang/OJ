#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main() {
	char a[27]="VWXYZABCDEFGHIJKLMNOPQRSTU";//这是明文文本，题目中给出的文本向左移5位即为答案，需要得到的是加密的文本。
	char str[1000];
	int i,len;
	while(cin.getline(str,1000)){ //getline遇回车或者输入字符数上限结束，此处用于回车。

		if(strcmp(str,"ENDOFINPUT")==0) //结束输入
			break;
		if(strcmp(str,"START")!=0&&strcmp(str,"END")!=0) {//如果不为START或者END就进行文本的输出。

		len=strlen(str);
		for(i=0;i<len;i++) {
			if(str[i]>='A'&&str[i]<='Z')
				printf("%c",a[str[i]-'A']);//很巧妙此处！
			else
				printf("%c",str[i]);
		}
		cout<<endl;
		}

	}
	return 0;
}