#include<stdio.h>
char inpt[1000008];
int main(){
	int cnt = 1, i=0;
	scanf("%[^\n]s", &inpt);
	while (inpt[i]) {
		if (inpt[i] == ' ') cnt++;
		i++;
	}
	if (inpt[0] == ' ') cnt--;
	if (inpt[i-1] == ' ') cnt--;
	printf("%d", cnt);
}