#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int i,len;
    gets(ch);
    len=strlen(ch);
    for(i=0;i<len;i++)
    printf("%c",ch[i]);
    return 0;
}
