#include <iostream>
#include <array>

std::array <std::string, 8> map = {
	"10000000",
	"01000000",
	"00100000",
	"00010000",
	"00001000",
	"00000100",
	"00000010",
	"00000001"
};
bool map_ok [8] = {0};

print () {
	for (int a = 0; a < 8; a ++) {
		if (!map_ok [a]) {
			map_ok [a] = true;
			std::cout << map [a] << std::endl;
			print ();
			map_ok [a] = false;
		}
		else continue;
	}
}

int main () {

	print ();

	return 0;
}