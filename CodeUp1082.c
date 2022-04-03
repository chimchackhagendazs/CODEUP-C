#include <stdio.h>

int main (void){
	int a;
	scanf("%x",&a);
	int i;
	for(i=1;i<=15;i++){
		
		printf("%x*%x=%x\n",a,i,a*i);
	}
	return 0;
}
