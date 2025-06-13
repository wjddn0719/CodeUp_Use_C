#include <stdio.h>

int fac(int a);

int main(){
    int a;
    scanf("%d", &a);
    printf("%d\n", fac(a));
}

int fac(int a){
    if(a==1)return 1;
    else return fac(a-1)*a;
}
