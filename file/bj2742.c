#include<stdio.h>
int scn,fi;
int main() {
	scanf("%d", &scn);
	for (fi = scn; fi >= 1; fi--) {
		printf("%d\n", fi);
	}
}