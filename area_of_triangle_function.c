#include<stdio.h>
#include<math.h>
float Area(int x1,int x2,int x3,int y1,int y2,int y3,float *area);
int main()
{
int x1,x2,x3,y1,y2,y3;
float *area;
float a ;
printf("enter (x,y)vertices of triangle \n");
scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
a=Area(x1,x2,x3,y1,y2,y3,area);
printf("The area of the triangle  is %f \n",a);
}
float Area(int x1,int x2,int x3,int y1,int y2,int y3, float *area)
{
  *area= fabs(0.5*((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y3))));
}
