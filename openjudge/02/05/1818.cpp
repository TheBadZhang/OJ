#include <iostream>
#include <array>

int r = 0;
int w = -1, h = -1;

bool tile_ok [20][20];
std::array <std::array <char, 20>, 20> tile;

void
find (int x, int y) {
	if (x < 0 || x >= w || y < 0 || y >= h) return ;
	if (tile_ok [x][y] || tile [y][x] == '#') return;
	tile_ok [x][y] = true;

	find (x + 1, y);
	find (x - 1, y);
	find (x, y + 1);
	find (x, y - 1);
	r += 1;
}

int main () {


	while (true) {
		std::cin >> w >> h;
		if (w == 0 && h == 0) return 0;
		int x, y;

		for (int a = 0; a < 20; a ++)
			for (int b = 0; b < 20; b ++)
				tile_ok [a][b] = false;
		r = 0;


		for (int a = 0; a < h; a ++) {
			for (int b = 0; b < w; b ++) {
				std::cin >> tile [a][b];
				if (tile [a][b] == '@') {
					x = b;
					y = a;
				}
			}
		}

		find (x, y);

		std::cout << r << std::endl;
	}

}