#include <cstdio>

int main() {

	int Money = 0;
	int RestMoney = 0;

	for (int a = 0; a < 12; a += 1) {
		int yusr;
		scanf("%d", &yusr);
		if (yusr > RestMoney + 300) {
			printf("-%d", a + 1);
			return 0;
		}
		int temprm = 300+RestMoney - yusr;
		Money += (temprm)/100*100;
		RestMoney += 300 - yusr - (temprm)/100*100;
	}
	printf("%.0f", (Money)*1.2 + RestMoney);


	return 0;
}