#include<stdio.h>
int main()
{
    int a,b,c,d;
    int n=0,sum=0,m[100];
    char x[50];
    scanf("%d\n",&n);
    if((n>0)&&(n<100))
    {
        for(a=0;a<n;a++)
        {
            gets(x);
            int y[3]={1,2,3};
            for(b=0;x[b]!='\0';b++)
            {
                if(x[b]=='B')
                {
                    sum = y[1];
                    y[1]=y[0];
                    y[0]=sum;
                }
                if(x[b]=='B')
                {
                    sum = y[2];
                    y[2]=y[1];
                    y[1]=sum;
                }
                if(x[b]=='C')
                {
                    sum = y[0];
                    y[0]=y[2];
                    y[2]=sum;
                }
            }

        }
    }


}
