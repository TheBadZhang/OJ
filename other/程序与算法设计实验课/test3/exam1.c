#include <stdio.h>
#include <math.h>   // pow ����

int main () {

	double x, y, z;
	int n;
	printf ("������ ���� ������ ����\n");
	scanf ("%lf %lf %d", &x, &y, &n);
	z = x*pow(1+y, n);    // x*(1+y)^n;
	printf ("%d���%.4lf���� %.4lf"
	" ���ʣ����ջ�� %.4lf", n, x, y, z);

	return 0;
}