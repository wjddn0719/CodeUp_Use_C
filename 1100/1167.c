#include <stdio.h>

int main(void){
    int a, b, c, k=0;
    scanf("%d %d %d", &a, &b,&c);
    if(a<=b && a<=c){
        k=b>=c ? c:b;
    }
    else if(b<=a && b<=c){
        k=a>=c ? c:a;
    }
    else if(c <= a && c <= b) {
        k= a >= b ? b:a;
    }
    printf("%d\n", k);
    return 0;
}
