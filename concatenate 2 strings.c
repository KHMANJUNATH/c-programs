#include<stdio.h>
#include<string.h>
main()
{
char s1[100],s2[100];
puts("enter the 1st string\n");
gets(s1);
puts("enter the 2nd string\n");
gets(s2);
strcat(s1,s2);
puts(s1);
}
