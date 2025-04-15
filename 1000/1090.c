#include <stdio.h>

int main(){
    long long int a, r, n, i;
    scanf("%lld %lld %lld", &a, &r, &n);
    long long int sum=a;
    for(i=1; i<n; i++){
        sum*=r;
    }
    printf("%lld", sum);
    return 0;
}
