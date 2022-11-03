#include<stdio.h>
int main() {
	int c;
	scanf("%d", &c);
	for (int fi = 1; fi <= c; fi++) {
		for (int fo = 0; fo < c-fi; fo++) {
			printf(" ");
		}
		for (int fx = 1; fx <= fi; fx++) {
			printf("*");
		}
		printf("\n");
	}
}