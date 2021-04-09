#include <iostream>
#include <vector>

int main () {
	
	std::vector <int> table;
	int n, m;

	while (std::cin >> n >> m) {
		table.clear ();
		for (int i = 0; i < 2*n; ++i) table.push_back(i);
		int pos = 0;
		for (int i = 0; i < n; ++i) {
			pos = (pos + m - 1) % table.size ();
			table.erase (table.begin()+pos);
		}
		int j = 0;
		for (int i = 0; i < 2*n; i++) {
			if (!(i%50) && i) printf ("\n");
			if (j < table.size() && i==table[j]) {
				++j;
				printf ("G");
			} else {
				printf ("B");
			}
		}
		printf ("\n\n");
	}
	
	return 0;
}
