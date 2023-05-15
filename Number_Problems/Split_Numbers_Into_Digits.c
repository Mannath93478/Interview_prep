#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    int mod;
    while(num > 0)
    {
        mod = num % 10;
        printf("%d",mod);
        num = num/10;
    }
    
    return 0;
}
