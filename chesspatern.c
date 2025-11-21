#include<Stdio.h>
int main()
{
int count=0;
char s[100];
scanf("%[^\n]s",s);
for(int i=0;s[i]!='\0';i++)
{
    if(s[i]==' ' && s[i+1]!='\0')
    count=0;
    else
    count++;
}
printf("%d",count);
}