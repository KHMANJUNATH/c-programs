#include<stdio.h>
void sum(int mat1[10][10],int mat2[10][10]);
void main() {
   int i, j, mat1[10][10], mat2[10][10];
    printf("Matrix 'a' elements\n ");
   for (i = 0; i < 4; i++) {
      for (j = 0; j < 4; j++) {
         printf("Enter the Element a[%d][%d] : ", i, j);
         scanf("%d", &mat1[i][j]);
      }
   }
    printf("Matrix 'b' elements\n ");
   for (i = 0; i < 4; i++)
      for (j = 0; j < 4; j++) {
         printf("Enter the Element b[%d][%d] : ", i, j);
         scanf("%d", &mat2[i][j]);
      }
      sum(mat1,mat2);
}
void sum(int mat1[10][10],int mat2[10][10])
{
    int i,j,mat3[10][10];
   for (i = 0; i < 4; i++)
   {
      for (j = 0; j < 4; j++) {
         mat3[i][j] = mat1[i][j] + mat2[i][j];}
      }
   printf("\nThe Addition of two Matrices is : \n");
   for (i = 0; i < 4; i++) {
      for (j = 0; j < 4; j++) {
         printf("%d\t", mat3[i][j]);
      }
      printf("\n");
   }
return;
}

