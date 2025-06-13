#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int max = a>b ? a:b;
    int min = a<b ? a:b;
    int total = max;
    while(1){
        if(total%min==0){
            printf("%d\n", total);
            break;
        }
        else {
            total += max;
        }
    }

}