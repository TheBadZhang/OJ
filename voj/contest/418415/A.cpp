#include <iostream>
#include <string>

using namespace std;

string haab[19]={"pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", "zac",
	"ceh", "mac", "kankin", "muan", "pax", "koyab", "cumhu", "uayet"};
string tzolkin [20] = {"imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk",
	"ok", "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau"};
struct data {
	int date;
	string month;
	int year;
};
void convert (data& x) {
	long current;
	int i;
	for (i = 0; i < 20; ++i) {
		if (x.month == haab[i]) break;
	}
	current = x.year*365+i*20+x.date+1;
	int num, year = 0;
	string word;
	if (current % 13 == 0)
		num = 13;
	else
		num = current % 13;
	while (current - 260 > 0) {
		++ year;
		current -= 260;
	}
	if (current == 0) {
		word = "ahau";
	} else {
		while (current - 20 > 0) {
			current -= 20;
		}
		if (current == 0) {
			word = "ahau";
		} else {
			word = tzolkin [current - 1];
		}
	}
	cout << num << " " << word << " " << year << endl;
}

int main () {
	int i, n;
	char ch;
	cin >> n;
	data* p = new data[n];
	for (i = 0; i < n; ++ i) {
		cin >> p[i].date >> ch >> p[i].month >> p[i].year;
	}
	cout << n << endl;
	for (i = 0; i < n; ++i) {
		convert (p[i]);
	}
	return 0;
}

