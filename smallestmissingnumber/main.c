#include<stdio.h>
int main(){
    int i,k,n,j=0,a[100],b[100];
    int testcases;
    scanf("%d",&testcases);
    while(testcases!=0)
    {
        j=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>0)
            {
                b[j]=a[i];
                j++;
            }
        }
        for(i=0;i<j;i++)
        {
            printf("%d ",b[i]);
        }printf("\n");
        int flag=1;
        for(i=1;i<j+1;i++)
        {
            flag=1;
            //printf("%d ",b[i]);
           for(k=0;k<j;k++)
           {
               if(b[k]==i)
               {
                   flag=0;
               }
           }
           if(flag==1)
           {
               printf("Missing %d\n",i);
               break;
           }
        }
        testcases--;
    }
    return 0;
}