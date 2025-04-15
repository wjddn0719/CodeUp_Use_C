
#include <stdio.h>

int main(){
    int n=0;
    scanf("%d", &n);
    if(n%400==0 || (n%4==0 && n%100!=0)){
        printf("Leap\n");
    }
    else printf("Normal\n");
}
