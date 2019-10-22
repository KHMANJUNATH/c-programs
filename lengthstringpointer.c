#include<stdio.h>
#include<string.h>
int length(char *s[100]);
void main()
{
    char *s[100];
    int len;
    printf("Enter the string\n");
    scanf("%s",s);
    len=length(s);
    printf("Length of string=%d\n",len);
}
int length(char *s[100])
{
int r;
    r=strlen(s);
}
