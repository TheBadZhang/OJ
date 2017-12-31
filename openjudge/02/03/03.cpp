#include <iostream>
#include <vector>


int main () {

	int n;
	std::vector <std::string> list;
	list.push_back ("\0");
	list.push_back ("\1");
	std::cin >> n;
	for (int a = 2; a < n + 1; a += 1) {
		std::string result("\0");
		for (int b = 0; b < list [a-1].length (); b += 1) {
			result [b] += (list [a-1][b])*2;
		}
		if (a % 2 == 0) {
			result [0] += 1;
		}
		for (int b = 0; b < result.length (); b += 1) {
			if (result [b] >= 10) {
				result [b+1] = result [b]/10;
				result [b+1] = result [b]%10;
			}
		}
		for (int b = result.length (); b >= 0; b -= 1) {
			printf ("%d",result [b]);
		}
		printf ("\n");
		
		list.push_back (result);
	}
	// for (int a = list [n+1].length (); a >= 0; a -= 1) {
	// 	printf ("%d",list [n+1] [a]);
	// }


	return 0;
}