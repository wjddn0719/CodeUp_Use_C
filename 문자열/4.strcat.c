#include <stdio.h>


int mos(char s[]){
    int i;
    for(i=0; s[i]!='\0'; i++){}
    return i;
}


int main(){
    char a[100]={0,}, b[100]={0,};
    int i, r, t;
    scanf("%s %s", a, b);
    r=mos(a);
    t=mos(b);
    for(i=0; i<r; i++){
        printf("%c", a[i]);
    }
    for(i=0; i<t; i++){
        printf("%c", b[i]);
    }
    return 0;
}