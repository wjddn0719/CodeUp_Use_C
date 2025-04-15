#include <stdio.h>

int main(){
    char a;
    while(a!='q'){
        scanf("%c ", &a);
        if(a!='q'){
            printf("%c\n", a);
        }
        else break;
    }
    printf("q");
    return 0;
}
