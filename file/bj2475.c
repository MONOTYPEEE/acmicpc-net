#include<stdio.h>
int zg(int ds) {
	return ds * ds;
}
int main() {
	int a[6];
	scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
	printf("%d", (zg(a[0]) + zg(a[1]) + zg(a[2]) + zg(a[3]) + zg(a[4]))%10);
}