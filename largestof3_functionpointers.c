#include<stdio.h>
int lar(int x,int y,int z, int *max);
int main()
{
int x,y,z,m,*max;
printf("enter the numbers\n");
scanf("%d%d%d",&x,&y,&z);
m=lar(x,y,z,&max);
printf("largest of three numbers is %d",m);
}
int lar(int x,int y,int z, int *max)
{
    int c;
    c=*max;
  c=x;
  if(y>c)
    {
      c=y;
    }
if(z>c)
  {
    c=z;
  }
}
