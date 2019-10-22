#include<stdio.h>
main()
{
int gen,s,b,ns;
printf("Enter the gender of the employee \n");
printf("1= Male \t 2= Female \n");
scanf("%d",&gen);
if (gen =1)
	{
		printf("Enter the salary of the Employee\n");
		scanf("%d",&s);
			if(s>10000)
			{
				b=(0.05*s);
			}
			else if (s<10000 && s>0)
			{
				b=(0.07*s);
			}
			else
			{
				printf("invalid input\n");
			}
	}
else if (gen=2)
	{

		printf("Enter the salary of the Employee\n");
		scanf("%d",&s);
			if(s>10000)
			{
				b=(0.1*s);
			}
			else if (s<10000 && s>0)
			{
				b=(0.12*s);
			}
			else
			{
				printf("invalid input\n");
			}
	}
else
{
	printf("invalid input\n");
}
ns=s+b;
printf("The Bonus for the employee is %d\n",b);
printf("The new salary of the employee is  %d",ns);
}
