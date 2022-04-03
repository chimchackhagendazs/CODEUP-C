


#include <stdio.h>
 
 
int main (void)
{
    int num1,num2,num3;
 
    
    scanf("%d %d %d", &num1 , &num2, &num3);
    if( (num1%2) == 0) printf("even\n"); //¦
    else printf("odd\n"); //Ȧ
    
    if( (num2%2) == 0) printf("even\n"); //¦
    else printf("odd\n"); //Ȧ
    
    if( (num3%2) == 0) printf("even"); //¦
    else printf("odd"); //Ȧ
 
    
    return 0;
}

