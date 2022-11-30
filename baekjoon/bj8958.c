#include<stdio.h>
#include<string.h>
int main() {
	char ox[90];
	int numOfO,addIc,numOfOX;
	scanf("%d", &numOfOX);
	for (int nf = 1; nf <= numOfOX; nf++) {
		scanf("%s", ox);
		addIc = 1; numOfO = 0;
		for (int ni = 0; ni <= strlen(ox); ni++) {
			if (ox[ni] == 'O') {
				numOfO += addIc;
				addIc++;
			}
			else if (ox[ni] == 'X') {
				addIc = 1;
			}
		}
		printf("%d\n", numOfO);
	}
}