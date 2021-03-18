#include <stdio.h>

int main () {

	double ch, math, en, sci, sum;

	scanf ("%lf %lf %lf %lf", &ch, &math, &en, &sci);

	sum = ch+math+en+sci;

	printf ("%.1lf\n%.2lf", sum, sum/4);

	return 0;
}