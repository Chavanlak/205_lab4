#include<stdio.h>
#include<string.h>

int main()
{
    int i,a;
    char n[200];
    scanf("%s",n);
    a=strlen(n);

    for(i=0;i<a;i++)
    {
        if(n[i]==n[i+1])
        {
            continue;
        }
        else if (n[i]!=n[i+1])
        {
            printf("%c",n[i]);
        }
        }
    return 0;
}
