#include <iostream>
#include <list>

int main () {
	
	int n, m;
	scanf("%d", &n);
	while (n--) {
		std::list <int> l;
		std::list <int>::iterator it;
		scanf ("%d", &m); 
		for (int i = 1; i <= m; ++i) {
			l.push_back(i);
		}
		int c = 1, k = 2;
		while (l.size () > 3) {
			c = 1;
			for (it = l.begin (); it != l.end ();) {
				if (c++%k==0) {
					it = l.erase (it);
				} else {
					it ++;
				}
			}
			k = k==2?3:2;
		}
		std::cout << *(l.begin()) << " " << *(++l.begin()) << " " << *(++++l.begin()) << std::endl;
	}

	
	
	return 0;
}
