#include<stdio.h>
#include<string.h>
int main() {
	int numOfCheetos;
	char cheetos[55][55];
	scanf("%d", &numOfCheetos);

	for (int fi = 0; fi <= numOfCheetos - 1; fi++) {
		scanf("%s", cheetos[fi]);
		for (int xi = 0; xi < strlen(cheetos[fi]); xi++) {
			if (cheetos[fi][xi] != cheetos[0][xi]) cheetos[0][xi] = '?';
		}
	}
	printf("%s", cheetos[0]);
}