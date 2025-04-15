#include <stdio.h>

int main(){
	 char s[21]="";
	 scanf("%s", &s);
	 int i;
	 for(i=0; s[i]!=0; i++){
	 	printf("\'%c\'\n", s[i]);
	 }
	 return 0;
}
