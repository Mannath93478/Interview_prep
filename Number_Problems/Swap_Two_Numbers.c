#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("%d %d\n", a, b);
    return 0;
}
