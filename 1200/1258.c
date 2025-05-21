#include<stdio.h>

int main(){
    int a,i, total=0;
    scanf("%d", &a);
    for(i=1; i<=a; i++){
        total+=i;
    }
    printf("%d\n", total);
    return 0;
}