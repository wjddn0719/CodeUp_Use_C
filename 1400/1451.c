#include <stdio.h>

int main(){
    int a, b[100001]={0,},temp=0;
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        scanf("%d", &b[i]);
    }
    for(int i=1; i<a; i++){
        for(int j=i+1; j<=a; j++){
            if(b[i]>b[j]){
                temp = b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    for(int i=1; i<=a; i++){
        printf("%d\n", b[i]);
    }
    return 0;
}