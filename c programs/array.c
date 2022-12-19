#include <stdio.h>
int main()
{
    int a[5], b[5], sum[5], i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter the element of a %d:", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("Enter the element of b %d:", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        sum[i] = a[i] + b[i];
    }
    for (i = 0; i < 5; i++)
    {

        printf("The sum is:%d/n", sum[i]);
    }
    return 0;
}