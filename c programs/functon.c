#include <stdio.h>
// WITH ARGUMENT AND WITH RETURN VALUE

/*int multi(int a, int b)
{
    return a * b;
}

int main()
{
    int k = 2;
    int j = 3;
    printf("The multiply of number is %d ", multi(k, j));

    return 0;
}*/

// WITH ARGUMENT AND WITHOUT RETURN VALUE

/*
void table(int n)
{
    for (int i = 1; i < 11; i++)
    {
        printf("%d\t", n);
    }
}

int main()
{

    table(3);

    return 0;
}
*/

// WITHOUT ARGUMENT AND WITH RETURN VALUE

/*
int takenumber()
{
    int i;
    printf("Enter the number ");
    scanf("%d", &i);
     return i;
}
int main()
{
    takenumber();
    printf("The enterd number is %d ", takenumber());
    return 0;
}*/

// WITHOUT ARGUMENT AND WITHOUT RETURN VALUE

void takenumber()
{
    int i;
    printf("Enter the number ");
    scanf("%d", &i);
}
int main()
{
    takenumber();
    // printf("The enterd number is %d ", takenumber());
    return 0;
}