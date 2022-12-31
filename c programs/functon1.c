#include <stdio.h>
int sum()
{
    int n1, n2;
    printf("enter the firdt number:\n");
    scanf("%d", &n1);
    printf("enter the second number:\n");
    scanf("%d", &n2);
    int add = n1 + n2;
    return add;
}
int main()
{

    printf("the sum is %d", sum());
    return 0;
}