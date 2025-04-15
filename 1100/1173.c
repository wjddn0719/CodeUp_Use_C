#include <stdio.h>

int main(void){
    int h, m;
    scanf("%d %d", &h, &m);
    if(h==0 && m<30){
        h=23;
        m+=30;
    }
    else if(h==0 && m==30){
        m-=30;
    }
    else if(m<=30 && h!=0){
        h-=1;
        m+=30;
    }
    else if(m>=30){
        m-=30;
    }
    printf("%d %d\n", h, m);
    return 0;
    
}
