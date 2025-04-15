#include <stdio.h>

int main(){
    int a, i=0, sum=0;
    scanf("%d", &a);
    while (sum<a){
        i++;
        sum+=i;
    }
    printf("%d", i);
}
