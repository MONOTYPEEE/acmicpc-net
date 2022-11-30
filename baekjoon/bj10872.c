#include<stdio.h>
int val, xx=1,fi;
int main() {
	scanf("%d", &val);
	for (fi = 1; fi <= val; fi++) {
		xx *= fi;
	}
	printf("%d", xx);
}