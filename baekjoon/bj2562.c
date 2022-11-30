#include<stdio.h>
int main() {
	int bigg = 0, temp, pos=0;
	for (int i = 1; i <= 9; i++) {
		scanf("%d", &temp);
		if (temp > bigg) {
			bigg = temp;
			pos = i;
		}
	}
	printf("%d\n%d", bigg, pos);
}