#include <stdio.h>

int main(){
	int a=0, b=0;
	scanf("%d %d", &a, &b);
	printf("%d", (a!=0 && b!=0)||(a==0 && b==0));
	return 0;
}
