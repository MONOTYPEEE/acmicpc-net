#include<stdio.h>
int main() {
	int a,v,i=0;
	while(1) {
		scanf("%d %d", &a, &v);
		if (a == 0 && v == 0) break;
		printf("%d\n",a+v);
	}
}