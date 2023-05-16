#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int count =1;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(n/i == i)
            {
                count += i;
            else
            {
                count += i + n/i;
            }
        }
    }
    
    if(n==count)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
