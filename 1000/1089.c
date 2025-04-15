#include <stdio.h>

int main(){
    int a, d, n ,i;
    scanf("%d %d %d", &a, &d, &n);
    int sum=a;
    for(i=1; i<n; i++){
        sum+=d;
    }
    printf("%d", sum);
    return 0;
}
