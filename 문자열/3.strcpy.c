#include <stdio.h>

int main(){
    char a[100]={0,}, b[100]={0,};
    scanf("%s", a);
    int i;
    for(i=0; a[i]!='\0'; i++){
        b[i]=a[i];
    }
    printf("%s\n", b);
    return 0;
}