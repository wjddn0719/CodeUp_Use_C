#include <stdio.h>

int main(){
    long long int a, m, d, n, i;
    scanf("%lld %lld %lld %lld", &a, &m, &d, &n);
    long long int sum=a;
    for(i=1; i<n; i++){
        sum=sum*m+d;
    }
    printf("%lld", sum);
    return 0;
}
