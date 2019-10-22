#include <stdio.h>
int reverse(int *n);
void main()
{
    int *n,rev;

    printf("Enter an integer: ");
    scanf("%d", &n);
    rev=reverse(&n);
    printf("Reversed Number = %d", rev);
}
    int reverse(int *n)
    {
        int  remainder,x,reversedNumber = 0;
    while(*n != 0)
    {

        remainder = *n%10;
        reversedNumber = reversedNumber*10 + remainder;
        *n =*n/10;
    }
    x=reversedNumber;

    }
