#include<stdio.h>
int main() {
	int sm=0,vl;
	for (int vf = 0; vf <= 4; vf++) {
		scanf("%d", &vl);
		sm += vl;
	}
	printf("%d", sm);
}