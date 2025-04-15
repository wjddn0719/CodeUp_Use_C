#include <stdio.h>

int main(){
    int n, arr[24]={0,}, i, a;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        scanf("%d", &a);
        arr[a]+=1;
    }
    for(i=1; i<=23; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
