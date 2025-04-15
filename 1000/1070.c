#include <stdio.h>

int main(){
    int a=0;
    scanf("%d", &a);
    if(a/3==1)printf("spring");
    else if(a/3==2)printf("summer");
    else if(a/3==3)printf("fall");
    else printf("winter");
    return 0;
}
