#include<stdio.h>

int main()
{
    int N,X;
    scanf("%d%d", &N, &X);

    if(N%X==0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    

    return 0;
}
