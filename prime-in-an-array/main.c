#include<stdio.h>
int main(){
    int s,i,n,j,count=0;
    scanf("%d",&s);
    for(i=0;i<s;i++)
    {
        scanf("%d",&n);
        count=0;
        for(j=1;j<=n;j++)
        {
            if(n%j==0)
            count++;
        }
        if(count==2)
        {
            printf("%d ",n);
        }
    }
    return 0;
}