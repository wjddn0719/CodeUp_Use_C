#include <stdio.h>

int main(void){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a>b &&a>c){
        if(a<c+b)printf("yes\n");
        else printf("no\n");
    }
    else if(b>a && b>c){
        if(b<a+c)printf("yes\n");
        else printf("no\n");
    }
    else if(c>a && c>b){
        if(c<a+b) printf("yes\n");
        else printf("no\n");
    }
    else if(a==b&&a==c)printf("yes\n");
    else printf("no\n");
    return 0;
}
