#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 1; i <= 7; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }
    printf("%d\t", sum);

    return 0;
}