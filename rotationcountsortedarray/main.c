#include <stdio.h>

int main()
{
    int n,a[100],i;
    scanf("%d",&n);
    scanf("%d",&a[0]);
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<a[i-1])
        {
            printf("%d",i);
            return 0;
        }
    }printf("0");
    return 0;
}
