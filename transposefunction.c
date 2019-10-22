#include <stdio.h>
void transpose(int a[10][10],int r,int c);
void main()
{
    int a[10][10],i, j,r,c;
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &r, &c);
    printf("\nEnter elements of matrix:\n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("Enter element a%d%d: ",i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    printf("\nEntered Matrix: \n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("%d  ", a[i][j]);
            if (j == c-1)
                printf("\n\n");
        }
        transpose(a,r,c);
}
void transpose(int a[10][10],int r,int c)
{
    int i,j,transpose1[10][10];
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            transpose1[j][i] = a[i][j];
        }
    printf("\nTranspose of Matrix:\n");
    for(i=0; i<c; ++i)
        for(j=0; j<r; ++j)
        {
            printf("%d ",transpose1[i][j]);
            if(j==r-1)
                printf("\n\n");
        }
        return;
}

