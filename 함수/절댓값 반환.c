#include <stdio.h>

int das(int a);

int main(){
    int a;
    scanf("%d", &a);
    printf("%d\n", das(a));
}

int das(int a){
    if(a>0)return a;
    else return -a;
}