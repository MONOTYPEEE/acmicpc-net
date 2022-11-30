#include<stdio.h>
int xx, yy;
int main() {
	scanf("%d %d", &xx, &yy);
	if (xx > 0) {
		if (yy > 0) {
			printf("1");
		}
		else if(yy < 0) {
			printf("4");
		}
	}else if (xx < 0) {
		if (yy > 0) {
			printf("2");
		}
		else if(yy < 0) {
			printf("3");
		}
	}
}