#include <stdio.h>
#include<stdlib.h>
int main()
{
        int i,a[20],n,k=1,j,temp;
        printf("Enter array size: ");
        scanf("%d",&n);
        printf("A[%d]=",n);
        for(i=0;i<n;i++)
        {
                a[i]=rand()%10;
                printf("%d ",a[i]);
        }printf("\n");
        for(i=0;i<n-1;i++)
        {
                for(j=i+1;j<n;j++)
                {
                        if(a[i]<a[j])
                        {
                                temp=a[i];
                                a[i]=a[j];
                                a[j]=temp;
                                printf("ITERATION %d: ",k++);
                                for(int l=0;l<n;l++)
                                printf("%d ",a[l]);
                                printf("\n");
                        }
                }
        }
        printf("SORTED ARRAY: ");
        for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
