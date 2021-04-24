#include <stdio.h>

int main()
{
    int n,i,a[100],j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
    }
    int sum=0;
    for(i=1;i<n;i++)
    {
        sum=sum+a[i];
        for(j=i-1;j>=0;j--)
        {
            sum=sum+a[j];
        }
    }printf("%d",sum);
    return 0;
}

