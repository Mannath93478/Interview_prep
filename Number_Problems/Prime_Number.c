#include<stdio.h>
int main()
{
    int num;

    scanf("%d", &num);

    int z =0;
    
    for(int i=1;i<=num;i++)
    {
        if(num % i == 0)
        {
            z++;
        }
    }
    if(z == 2)
    {
        printf("Prime number");
    }
    else
    {
        printf("Not Prime number");
    }

    return 0;
}
