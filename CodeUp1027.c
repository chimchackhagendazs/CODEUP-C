
#include<stdio.h>
 
int main(void)
{
    int year,mon,day;
    scanf("%d.%d.%d",&year, &mon, &day);
    printf("%02d-%02d-%04d", day, mon, year);
    return 0;
}

