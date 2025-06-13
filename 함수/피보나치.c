#include <stdio.h>

int fibo(int a);

int main(){
    int a, total;
    scanf("%d", &a);
    total = fibo(a);
    printf("%d\n",total);
}

int fibo(int a){
    int flag=0, total=1;
    for(int i=1; i<a; i++){
        int temp = total;
        total+=flag;
        flag = temp;
    }
    return total;
}