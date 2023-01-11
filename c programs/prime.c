#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter the number:   ");
    scanf("%d", &n);
    int flag = 0; // flag is pointlet mesns it help to us to know that which condtion or satetement is used
                  // we can also use ram on the palce of plag
    for (int i = 2; i <= sqrt(n); i++)
    // for (int i = 2; i*i <=n; i++)
    {
        if (n % i == 0)
        {
            printf("it is not prime ");
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("it is  prime");
    }

    return 0;
}