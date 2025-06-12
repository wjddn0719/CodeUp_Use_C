#include <stdio.h>

int add(int a);

int main(){
    int a;
    scanf("%d", &a);
    printf("%d\n", add(a));
}

int add(int a){
    int i,total=0;
    for(i=1; i<=a; i++){
        total+=i;
    }
    return total;
}