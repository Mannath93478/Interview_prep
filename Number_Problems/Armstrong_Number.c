#include<stdio.h>
int main()
{
    int num;

    scanf("%d", &num);

    int mod, sum = 0, temp = num;
    
    while(num > 0)
    {
        mod = num % 10;
        sum = sum + (mod * mod * mod);
        num = num/10;
    }
    
    if(sum == temp)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not Armstrong number");
    }
   
    return 0;
}
