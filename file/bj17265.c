#include<stdio.h>
int main() {
	int adx, ady, adz,
		cdx, cdy, cdz;
	scanf("%d %d %d %d %d %d", &adx, &ady, &adz, &cdx, &cdy, &cdz);
	printf("%d %d %d", cdx - adz, cdy / ady, cdz - adx);
}