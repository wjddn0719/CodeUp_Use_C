#include<stdio.h>

int main(){
	int y=0, m=0, d=0;
	scanf("%d.%d.%d", &y, &m, &d);
	printf("%04d.%02d.%02d", y, m, d);
	return 0;
}
