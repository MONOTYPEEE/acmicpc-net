#include<stdio.h>
int main() {
    int aa=0, bb=0;
	while (1){
		scanf("%d %d", &aa, &bb);
		if (aa == 0 && bb == 0) break;
		else if (aa > bb) printf("Yes\n");
		else if (aa <= bb) printf("No\n");
	}
}