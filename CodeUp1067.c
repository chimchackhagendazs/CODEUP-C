
#include<stdio.h>
 
int main(void)
{
    int num;
    scanf("%d",&num);
    
    if(num>0) printf("plus\n"); //0���� ũ�� �÷���
    else printf("minus\n");  //�ƴϸ� ���̳ʽ�
    
    if((num%2) == 0) printf("even"); //¦
    else printf("odd"); //Ȧ
    
    return 0;
}

