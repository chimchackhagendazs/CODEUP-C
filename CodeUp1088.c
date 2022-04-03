#include <stdio.h>

int main(void){
	int a;
	scanf("%d",&a);
	int f;
	
	for(f=1;f<=a;f++){
		
		if(f%3==0){
			continue;
			
		}
		printf("%d ",f);
	}
	return 0;
	
}
