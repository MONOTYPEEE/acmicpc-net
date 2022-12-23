#include <stdio.h>
#include <string.h>

int arr[1008];
void srt(int non) {
	int key, i, j;
	for (i = 1; i < non; i++) {
		key = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > key; j--)
			arr[j + 1] = arr[j];
		arr[j + 1] = key;
    }
}

int main()
{
    int non;
    scanf("%d",&non);
    for(int dd=0;dd<=non-1;dd++){
        scanf("%d",&arr[dd]);
    }
    srt(non);
    for(int ix=0;ix<=non-1;ix++){
        printf("%d\n",arr[ix]);
    }
}
