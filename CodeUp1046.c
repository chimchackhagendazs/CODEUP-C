#include <stdio.h>

int main (void){
	
	int num1,num2,num3,num4,num5;
	num5=3;
	scanf("%d %d %d",&num1,&num2,&num3);
	
	
	num4=num1+num2+num3;
	printf("%d\n",num4);
	
	printf("%.01f",(float)num4/(float)num5);
	
	return 0;

}
