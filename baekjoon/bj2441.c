#include<stdio.h>
int main(){
	int i, n, b, input;
	scanf("%d", &input);
	for (i = 1; i <= input; i++) {
		for (b = 0; b<=i-2; b++) {
			printf(" ");
		}
		for (n = i; n <= input; n++) {
			printf("*");
		}
		printf("\n");
	}}