#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int n,i,j,k,temp;
    scanf("%d",&n);
    int *a[n];
    for(i=0;i<n;i++)
    {
        a[i] = (int *)malloc(sizeof(int)*3);
        scanf("%d %d",&a[i][0],&a[i][1]);
        //a[i][2] = a[i][0] + a[i][1];
        a[i][2] = -1;
    }
    
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j][0]<a[i][0])
            {
                for(k=0;k<2;k++)
                {
                    temp = a[j][k];
                    a[j][k] = a[i][k];
                    a[i][k] = temp;
                }
            }
        }
    }
    
    a[0][2] = a[0][0] + a[0][1];
    int min = a[0][2],count = 1,flag=0,index;
    for(i=1;i<n;i++)
    {
        for(j=i-1;j>=0;j--)
        {
            if(a[i][0]>a[j][2] && a[j][2]!=-1)
            {
                flag=1;
                a[j][2] = a[i][0] + a[i][1];
                break;
            }
        }
        if(flag == 0)
        {
            a[i][2] = a[i][0] + a[i][1];
            count++;
        }
    }
    printf("%d",count);
    return 1;
}