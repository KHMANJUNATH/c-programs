#include<stdio.h>
int SUM(int *a[100],int *n, int *r);
int main()
{
    int *a[100],*n,i,sum;
    int *r;
    printf("Enter size of an array\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
     for(i=0;i<*n;i++)
     {
         scanf("%d",&a[i]);
     }
     sum=SUM(&a,&n,&r);
     printf("Sum of elements=%d\n",sum);
}
int SUM(int *a[100],int *n, int *r)
{
    int j,s=0;
     for(j=0;j<*n;j++)
     {
         s=s+(*a[j]);
     }
     *r=s;

}
