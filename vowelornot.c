#include<stdio.h>
#include<ctype.h>
void vowel(char c);
main()
{
char c;
printf("enter the character \n");
scanf("%c",&c);
vowel(c);
}
void vowel(char c)
{
  c=tolower(c);

if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
{
printf("%c is a vowel ",c);
}
else
{
printf("%c is not a vowel ",c);
}
  return 0;
}
