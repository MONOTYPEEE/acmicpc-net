#include<stdio.h>
float hakJumm(char ss[]){
    if(ss[0]=='A'){
        if(ss[1]=='+') return 4.3;
        else if(ss[1]=='0') return 4.0;
        else if(ss[1]=='-') return 3.7;
    }
    else if(ss[0]=='B'){
        if(ss[1]=='+') return 3.3;
        else if(ss[1]=='0') return 3.0;
        else if(ss[1]=='-') return 2.7;
    }
    else if(ss[0]=='C'){
        if(ss[1]=='+') return 2.3;
        else if(ss[1]=='0') return 2.0;
        else if(ss[1]=='-') return 1.7;
    }
    else if(ss[0]=='D'){
        if(ss[1]=='+') return 1.3;
        else if(ss[1]=='0') return 1.0;
        else if(ss[1]=='-') return 0.7;
    }
    else if(ss[0]=='F') return 0;
}
int main(){
    char Blase[8];
    scanf("%s",Blase);
    printf("%.1f",hakJumm(Blase));
}