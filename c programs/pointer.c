#include <stdio.h>

int main()
{

    int a = 23;
    int *ptra;
    ptra = &a;
    printf("The address of ptra pointer is %x\n", &ptra);
    printf("The value of a is %d\n", *ptra);
    printf("The address of a is %x\n", &a);
    printf("The address of a is %x\n", ptra);
    printf("The value of a is %d\n", a);
    printf("The value of stored at address %x is %d\n", ptra, *ptra);
}