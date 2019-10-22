//This is a Program used to calculate the area of a triangle using the x and y cordinates of the three sidde of a triangle
#include<stdio.h>
#include<math.h>
main()
{
int x1,x2,x3,y1,y2,y3;// point a(x1,y1),(x2,y2),(x3,y3)
float area;
printf("enter (x,y) vertices of triangle \n");
scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
area=fabs(0.5*((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y3))));
printf("The area of the triangle  is %f \n",area);
}
