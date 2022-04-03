#include<stdio.h>

int main (void){
	
	int a,i;
	int k;
	k=0;
	scanf("%d",&a);
	i=0;
	
	while(1){
		i++;
		k+=i;
		if(k>=a){//k>=a key point
			break;
		}
		
}
	printf("%d",i);
	
	return 0;
	
}
