#include <cstdio>

int main(int argc, char *argv[]) {

	int *list = new int [10];
	double mo[10] = {28.9, 32.7, 45.6, 78, 35, 86.2, 27.8 , 43, 56, 65};

	for (int a = 0; a < 10; a += 1) {
		scanf("%d", &list[a]);
	}
	
	double times = 0;

	for (int a = 0; a < 10; a += 1) {
		times += list[a] * mo[a];
	}

	printf("%.1lf", times);


	return 0;
}