#include <stdio.h>

int main(){
    int a, flag=1;
    scanf("%d", &a);
    for(int i=2; i<a; i++){
        if(a%i==0 && a!=1){
            flag = 0;
            break;
        }
    }
    if(flag==0 || a==1)printf("소수가 아닙니다.\n");
    else printf("소수입니다.\n");
}