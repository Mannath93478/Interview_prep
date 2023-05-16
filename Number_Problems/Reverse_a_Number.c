#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    int mod, ans;
    while(num > 0)
    {
        mod = num % 10;
        ans = ans * 10 + mod;
        num = num/10;
    }
    
    printf("%d",ans);
 
    return 0;
}
