#include <stdio.h>

int main(){
	int a=0, b=0, c=0, d=0, e=0;
	scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
	printf("[%d]\n[%d]\n[%d]\n[%d]\n[%d]", a*10000, b*1000, c*100, d*10, e);
	return 0;
}
