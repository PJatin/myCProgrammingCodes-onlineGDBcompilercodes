#include <stdio.h>

int main()
{
    int i,a[10],n,diff;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    for(i=0;i<n-2;i++)
        if((a[i+1]-a[i])==(a[i+2]-a[i+1]))
            diff=a[i+1]-a[i];   
        
    for(i=0;i<n;i++)
        if((a[i+1]-diff)!=a[i])
        {
            printf("Missing Number : %d\n",(a[i+1]-diff));
            break;
        }
        
    return 0;
}
