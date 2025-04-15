#include <stdio.h>

int main(){
    int n, i, arr[10001];
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        scanf("%d", &arr[i]);
    }
    int sum = arr[1];
    for(i=1; i<=n; i++){
        if(sum>arr[i]){
            sum=arr[i];
        }
        else continue;
    }
    printf("%d", sum);
    return 0;
}
