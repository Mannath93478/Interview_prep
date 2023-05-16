#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    
    int mod, ans=0, temp = num;
    while(num > 0)
    {
        mod = num % 10;
        ans = ans * 10 + mod;
        num = num/10;
    }
    
    if(ans == temp)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}
