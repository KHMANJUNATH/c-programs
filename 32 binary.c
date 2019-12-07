#include<stdio.h>

int CountOnesFromInteger(unsigned int);

int main()
{
    unsigned int inputValue;
    short unsigned int onesOfValue;
    printf("Please Enter value (between 0 to 4,294,967,295) : ");
    scanf("%u",&inputValue);
    onesOfValue = CountOnesFromInteger(inputValue);

    printf("\nThe Number has \"%d\" 1's and \"%d\" 0's",onesOfValue,32-onesOfValue);
}

int CountOnesFromInteger(unsigned int value)
{
    unsigned short int i, count = 0;
    for(i = 0; i < 32 ; i++)
    {
        if (value % 2 != 0)
        {
            count++;
        }
        value = value >> 1;
    }
    return count;
}