#include <stdio.h>
#include <math.h>
int main()
{
int i=0,j=0,k=0,sum=0;
int Array1[4][4];
int Array2[4][4];
int ResultArray[4][4];

printf("Enter array elements 1\n");
for(i=0;i<4;i++)
    for(j=0;j<4;j++)
     scanf("%d",&Array1[i][j]);

printf("Enter array elements 2");
for(i=0;i<4;i++)
    for(j=0;j<4;j++)
     scanf("%d",&Array2[i][j]);


for (i = 0; i < 4; ++i) {
    for (j = 0; j < 4; ++j)
        {
        for (k = 0; k < 4; ++k)
        {
            sum=sum+Array1[i][k]*Array2[k][j];
        }
        ResultArray[i][j]=sum;
        sum=0;
    }
}
printf("\tMultiplication Array1 and Array2\n");
for (i = 0; i    < 4; ++i)
    {
    for (j = 0; j < 4; ++j)
     {
        printf(" %10d \t",ResultArray[i][j]);
    }
    printf("\n");
}
return 0;
}
