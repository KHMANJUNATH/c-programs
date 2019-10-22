#include<stdio.h>

int flint(float *y);
main()
{
int i;
float *y;
printf("enter the floating number \n");
scanf("%f",&y);
i=flint(&y);
printf("entered integer is is %d ", i);
}
int flint(float *y)
{
  return (int)*y;
}
