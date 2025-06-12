#include <stdio.h>

int fac(int a);

int main(){
    int a;
    scanf("%d", &a);
    printf("%d\n", fac(a));
}

int fac(int a){
    int total=1, i;
    for(i=a; i>=1; i--){
        total*=i;
    }
    return total;
}
