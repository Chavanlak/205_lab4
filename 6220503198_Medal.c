#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n][3],b[n-2],c[3]={4,2,1};
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
for(i=0;i<n-2;i++)
{
    b[i]=0;
    for(j=0;j<3;j++)
    {
    b[i]=0;
    for(j=0;j<3;j++)
    {
        b[i]+=(a[i][j]+a[i+1][j]+a[i+2][j])*c[j];
    }
    }
   int max=0,min=0;
   for(i=1;i<n-2;i++)
   {
       if(b[i]>b[max])
       {
           max=i;
       }
       else if(b[i]>b[max])
       {
           min =i;
       }
   }
}
