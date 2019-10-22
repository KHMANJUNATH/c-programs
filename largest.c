#include<stdio.h>
main()
{
int x,y,z,max;
printf("enter the numbers\n");
scanf("%d%d%d",&x,&y,&z);
max=x;;
if(y>max)
  {
    max=y;
  }
if(z>max)
{
  max=z;
}
printf("largest of three numbers is %d",max);
}
