// #include <cstdio>
#include <graphics.h>
#include <cmath>
#include <cstdlib>
#include <ctime>

int main () {

	int *list = new int [1000];
	setinitmode (INIT_RENDERMANUAL);
	initgraph (1000, 600);
	for (;is_run ();delay_ms (0), cleardevice ()) {
		srand (time (nullptr) + clock ());
		for (int a = 0; a < 1000; a += 1) {
			list [a] = rand ()%300 - rand()%300;
		}
		for (int a = 0; a < 1000; a += 1) {
			if (list [a] >= 0) {
				line (a, -list [a] + 300, a, 300);
			} else {
				line (a, 300, a, -list [a] + 300);
			}
		}
		ege::getch ();
	}
	closegraph ();
	return 0;
}