#include<stdio.h>
#include<string.h>
void concate(char str1[100],char str2[100]);
main()
{
char s1[100],s2[100];
puts("enter the 1st string\n");
gets(s1);
puts("enter the 2nd string\n");
gets(s2);
concate(s1,s2);
}
void concate(char str1[100],char str2[100])
{ strcat(str1,str2);
  printf("after concatination : ");
  puts(str1);
  return 0;
}
