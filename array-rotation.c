#include<stdio.h>
int main()
{
    int n,d,a[1000000],i,j,temp;
    scanf("%d %d",&n ,&d);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    d=d%n;
    for(i=0;i<d;i++)
    {
        temp=a[0];
     for(j=0;j<n-1;j++)
     {
         a[j]=a[j+1];
     }  
     a[n-1]=temp;
    }
    for(i=0;i<n;i++)
    {
     printf("%d ",a[i]);
    }
}
