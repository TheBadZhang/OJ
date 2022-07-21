#include <iostream>
#include <map>
#include <string>
#include <set>
#include <cmath>


using namespace std;

struct ST {
	int v;
	string next_address;
} t;

map<string, ST> m;


int main () {

	int N;
	string head;
	cin >> head >> N;
	string ad, nead;
	int v;
	set<int> ss;
	for (int i = 0; i < 5; i++) {
		cin >> ad >> t.v >> t.next_address;
		m.insert(pair<string, ST>(ad, t));
		// ss.insert(abs(v));
	}
	string deladdr_head = "";
	string del_addr = "";
	string now_addr = m[head].next_address;
	ss.insert (m[head].v);
	string pre_addr = head;
	while (m.count(now_addr)) {

		if (ss.count(abs(m[now_addr].v))) {
			m[pre_addr].next_address = m[now_addr].next_address;
			if (del_addr == "") {
				deladdr_head = now_addr;
				del_addr = now_addr;
			}
				m[del_addr].next_address = now_addr;
				// m[pre_addr].next_address = m[now_addr].next_address;
				del_addr = now_addr;
				// m[now_addr].next_address = "-1";
				cout << m[now_addr].v << "\t" << pre_addr << "\t" << now_addr << endl;


		} else {
						cout << m[now_addr].v << "\t" << pre_addr << "\t" << now_addr << endl;
			ss.insert(abs(m[now_addr].v));
			pre_addr = now_addr;
		}
			now_addr = m[now_addr].next_address;
	}
	m[pre_addr].next_address = "-1";
	m[del_addr].next_address = "-1";
	now_addr = head;
	while (m.count(now_addr)) {
		cout << now_addr << " " << m[now_addr].v << " " << m[now_addr].next_address << endl;
		now_addr = m[now_addr].next_address;
	}
	now_addr = deladdr_head;
	while (m.count(now_addr)) {
		cout << now_addr << " " << m[now_addr].v << " " << m[now_addr].next_address << endl;
		now_addr = m[now_addr].next_address;
	}

	return 0;
}