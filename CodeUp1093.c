#include<stdio.h>

int main (void){

	
	int a[24]={};
	
	int num;
	int num2;
	
	scanf("%d",&num);//ºÎ¸¥ È½¼ö 
	
	for(int i=1;i<=num;i++){
		scanf("%d",&num2);
		a[num2]+=1;
		
	}
	for(int j = 1; j < 24; j++) {
    printf("%d ", a[j]);
    }
 
	return 0;
	
}
