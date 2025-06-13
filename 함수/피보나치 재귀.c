#include <stdio.h>

int fibo(int a);

int main(){
    int a, total;
    scanf("%d", &a);
    total = fibo(a);
    printf("%d\n",total);
}

int fibo(int a){
    if(a==0)return 0;
    if(a==1)return 1;
    else return fibo(a-1)+fibo(a-2);
}