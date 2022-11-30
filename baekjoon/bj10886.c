#include<stdio.h>
int nOY = 0, nOP, fi, sjawejkl;
int main() {
	scanf("%d", &nOP);
	for (int fi = 1; fi <= nOP; fi++) {
		scanf("%d", &sjawejkl);
		if (sjawejkl == 1) nOY++;
	}
	if (nOY>nOP/2){
		printf("Junhee is cute!");
	}
	else {
		printf("Junhee is not cute!");
	}
}