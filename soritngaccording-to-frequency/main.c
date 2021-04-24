//10 8 8 2 2 2 2 4 8 1 2
// Sorting based on frequncy.
#include <stdio.h>
#include<stdio.h>
int main(){
    int n,a[100],count=1,i,j,f[100]={0},x[10],k=0;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<n;i++)
    {
        count=1;
        if(a[i]!=-1)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    count++;
                    a[j]=-1;
                }
            }
            f[i]=count;
            x[k]=i;
            k++;
            printf("index=%d elememt=%d  frequency=%d \n",i,a[i],f[i]);
        }
    }
    
    
    
    for(i=0;i<k;i++)
    {
        for(j=1;j<=f[i];j++)
        {
            printf("%d ",a[x[i]]);
        }
    }
    return 0;
}
