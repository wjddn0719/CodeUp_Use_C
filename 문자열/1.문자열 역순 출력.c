#include <stdio.h>

int mos(char s[]){
    int i;
    for(i=0; s[i]!='\0'; i++){}
    return i;
}

int main(){
    char a[100]={0,};
    int result, i;
    scanf("%s", a);
    result = mos(a);
    for(i=result-1; i>=0; i--){
        printf("%c", a[i]);
    }
    printf("\n");
    return 0;
}