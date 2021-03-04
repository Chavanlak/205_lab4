#include<stdio.h>
#include<string.h>

int mian()
{
    int i,a;
    char x[200];

    scanf("%s",x);
    a =strlen(x);

    for(i=0;i<a;i++)
    {
        if(x[i]==x[i+1])
        {
            continue;
        }
        else if (x[i]!=x[i+1])
        {
            printf("%c",x[i]);
        }

    }
    return 0;
}
