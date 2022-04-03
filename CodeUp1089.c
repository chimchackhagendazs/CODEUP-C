
#include<stdio.h>
 
int main(){
    
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);//a=starting vlaue b=difference in rank c=number of times
    
    for(int j = 1; j <c; j++){
        
        a += b; 
        
    }
    printf("%d",a);
    
    
    return 0;
}
