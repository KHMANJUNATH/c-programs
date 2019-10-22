#include<stdio.h>
void sign(int *n);
main()
{
int n;
printf("enter the number\n");
scanf("%d",&n);
sign(&n);

}
void sign(int *n)
{
	if(*n>0)
			{
			    printf(" the number is positive \n");
			}
	else if(*n<0)
			{
			    printf("The number is negative \n");
			}
	else
		{
			printf(" The number is zero \n");
		}
}
