#include <stdio.h>

int add(int a){
    if(a==1)return 1;
    else return add(a-1)+a;
}

int main(){
    int a;
    scanf("%d", &a);
    printf("%d\n", add(a));
}