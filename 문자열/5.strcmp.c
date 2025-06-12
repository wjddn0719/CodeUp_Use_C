#include <stdio.h>

int mos(char s[]){
    int i;
    for(i=0; s[i]!='\0'; i++){}
    return i;
}

int main(){
    char a[100]={0,}, b[100]={0,};
    int r, t, i, result=0;
    scanf("%s %s", a, b);
    r=mos(a);
    t=mos(b);
    for(i=0; i<(r>t ? r:t); i++){
        if(a[i]!=b[i]){
            result = a[i]-b[i];
            break;
        }
    }
    printf("%d\n", result);
    return 0;
}