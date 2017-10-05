#include <cstdio>

int main() {

	int a;
	scanf("%d", &a);
	if (a%400 == 0 && a%3200 != 0 || (a%100 != 0 && a%4 == 0)) {
		printf("Y");
	} else printf("N");

	return 0;
}

// if a%100 == 0 then
// 	if a%400 == 0 && a%3200 != 0 then
// 		print("Y")
// 	else then print("N")
// 	end
// else then a%4 == 0 then 
// 	print("Y")
// end