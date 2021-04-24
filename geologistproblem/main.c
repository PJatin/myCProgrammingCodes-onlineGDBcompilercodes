// 10 2 345 604 321 433 704 470 808 718 517 811 300 350 400 700
// 10 samples from 345 - 811. Ranges 300-350 & 400-700.
#include <stdio.h>
#include<stdlib.h>
int main(){
    int i,j,s,r,count=0,range[1000000][2];
    scanf("%d",&s);
    int *samp = (int *)malloc(s*sizeof(int));
    scanf("%d",&r);
    for(i=0;i<s;i++)
    scanf("%d",&samp[i]);
    for(i=0;i<r;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&range[i][j]);
        }
    }
    
    for(i=0;i<s;i++)
    printf("%d ",samp[i]);
    printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",range[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<r;i++)
    {
        count=0;
        for(j=0;j<s;j++)
        {
            if(samp[j]>=range[i][0] && samp[j]<=range[i][1])
            {
                count++;
            }
        }
        printf("%d ",count);
    }
    
    return 0;
}
