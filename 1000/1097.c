#include <stdio.h>

int main(){
    int x,y,a,i, j,k, map[20][20]={0,};
    for(i=1; i<=19; i++){
        for(j=1; j<=19; j++){
            scanf("%d", &map[i][j]);
        }
    }   
    scanf("%d", &a);
    for(i=1; i<=a; i++){
        scanf("%d %d", &x, &y);
       //반복문 두개 만들어서 바꾸기 ㅅㅂㅅㅂㅅㅂ
        for(j=1; j<=19; j++){
            if(map[x][j]!=0)map[x][j]=0;
            else map[x][j]=1;
        }
        for(k=1; k<=19; k++){
            if(map[k][y]!=0)map[k][y]=0;
            else map[k][y]=1;
        }
    }
    for(i=1; i<=19; i++){
        for(j=1; j<=19; j++){
            printf("%d ", map[i][j]);
        }
        printf("\n");
    }
    return 0;
}
