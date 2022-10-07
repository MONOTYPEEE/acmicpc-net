#include<stdio.h>
int main(){
	int f;
	scanf("%d", &f);
	for (int q = 1; q <= f; q++) {
		for (int d = 1; d <= q; d++) {
			printf("*");
		}
		printf("\n");
	}
}