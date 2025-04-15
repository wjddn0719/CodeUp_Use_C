#include <stdio.h>

int main(void){
    int h, m, d, total=0;
    scanf("%d %d %d", &h, &m, &d);
    total=h-m+d;
    if(total%10==0)printf("대박\n");
    else printf("그럭저럭\n");
    return 0;
}
