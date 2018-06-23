#include <iostream>
#include <vector>

struct S {
	std::string xh, mz, xb, nl, df, dz;
}s;

int main () {
	
	std::vector <S> l;
	
	while (true) {
		std::string xh, mz, xb, nl, df, dz;
		std::cin >> s.xh;
		if (s.xh == "end") break;
		std::cin >> s.mz >> s.xb >> s.nl >> s.df >> s.dz;
		l.push_back (s); 
	}
	for (int a = l.size () - 1; a >= 0; a -= 1) {
		
		std::cout << l [a].xh << " " << l [a].mz << " " << l [a].xb << " "
		          << l [a].nl << " " << l [a].df << " " << l [a].dz << std::endl;
	}
	
	return 0;
}