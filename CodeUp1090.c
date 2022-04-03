#include<stdio.h>
int main()
{
 unsigned long long  int a, r, n, i;
    scanf("%lld %lld %lld", &a, &r, &n);
    for (i = 1; i <= n - 1; i++)
    {
        a *= r;
    }
    printf("%lld",a);//a default value  
	
	    return 0;
}
