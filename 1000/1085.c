#include <stdio.h>

int main(){
    double h, b, c, s;
    double sum=0;
    scanf("%lf %lf %lf %lf ", &h, &b, &c, &s);
    sum = (h*b*c*s)/8/1024/1024;
    printf("%.1lf MB", sum);
    return 0;
}
