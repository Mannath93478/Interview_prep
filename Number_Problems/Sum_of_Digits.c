#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    int mod, sum = 0;
    
    while(num > 0)
    {
        mod = num % 10;
        sum = sum + mod;
        num = num/10;
    }
    
    printf("%d",sum);
    return 0;
}
