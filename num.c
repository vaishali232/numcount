#include<stdio.h>
int main()
{
char s[1000];
int n,count=0;
scanf("%[^\n]%*c",s);
n=strlen(s);
for(int i=0;i<n;i++)
{
    if(s[i]>='0'&&s[i]<='9')
    {
        count++;
    }
}
printf("%d",count);


}
