#include <stdio.h>

int mos(char s[]){
    int i;
    for(i=0; s[i]!='\0'; i++){}
    return i;
}

int main(){
    char k[100]={0,};
    int result;
    scanf("%s", k);
    result = mos(k);
    printf("%d\n", result);
}
