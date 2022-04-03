
#include<stdio.h>
 
int main(void)
{
    int num;
    scanf("%d",&num);
    
    if(num>0) printf("plus\n"); //0보다 크면 플러스
    else printf("minus\n");  //아니면 마이너스
    
    if((num%2) == 0) printf("even"); //짝
    else printf("odd"); //홀
    
    return 0;
}

