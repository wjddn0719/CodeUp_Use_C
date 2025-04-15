#include <stdio.h>

int main(){
    int a, sum=0,i=0;
    scanf("%d", &a);
    while(sum<a){
        i++;
        sum +=i;
    }
    printf("%d", sum);
    return 0;
}
