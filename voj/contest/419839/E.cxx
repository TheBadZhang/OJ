#include <iostream>
#include <vector>
#include <algorithm>
int main () {

	int N, Q, n, cases = 1;
	std::vector <int> list;
	while (std::cin >> N >> Q, N!=0&&Q!=0) {
		for (int i = 0; i < N; ++i) {
			std::cin >> n;
			list.push_back (n);
		}
		std::sort (list.begin(), list.end());
		printf ("CASE# %d:\n", cases);
		for (int i = 0; i < Q; ++i) {
			std::cin >> n;
			auto it = std::find (list.begin(), list.end(), n); 
			if (it != list.end()) {
				printf ("%d found at %d\n",  n, 1+&*it-&list[0]);
			} else {
				printf ("%d not found\n",  n, 1+&*it-&list[0]);
			}
			// std::vector<int>::iterator pos = std::find (list.begin(), list.end (), n);
			// if (pos != list.end()) {

			// } else {

			// }
		}
		list.clear ();
		++cases;
	}


	return 0;
}