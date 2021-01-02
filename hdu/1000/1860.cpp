/* HDU1860 统计字符 */

#include <iostream>
#include <string>

using namespace std;

const string END = "#";

int main()
{
	string character, s;
	int count;

	while(getline(cin, character)) {
		if(character == END)
			break;

		getline(cin, s);

		for(int i = 0; i < character.size(); ++i) {
			count = 0;
			for(int j = 0; j < s.size(); ++j)
				if(s[j] == character[i])
					++count;
			// printf ("%s %d\n", character[i].c_str (), count);
			cout << character[i] << " " << count << endl;
		}
	}
	return 0;
}