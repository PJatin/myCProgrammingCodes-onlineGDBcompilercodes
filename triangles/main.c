#include <stdio.h>
#include<stdlib.h>
#include<math.h>
/*
3
7 24 25
5 12 13
3 4 5
*/
int heron(int a,int b,int c);
int main()
{
        int i,A[20],B[20],n,a,b,c,k=1,j,temp;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                scanf("%d %d %d",&a,&b,&c);
                A[i]=heron(a,b,c);
                B[i]=A[i];
        }
        printf("A[%d]= ",n);
        for(i=0;i<n;i++)
        {
                printf("%d ",A[i]);
        }printf("\n");
        for(i=0;i<n-1;i++)
        {
                for(j=i+1;j<n;j++)
                {
                        if(A[i]>A[j])
                        {
                                temp=A[i];
                                A[i]=A[j];
                                A[j]=temp;
                        }
                }
        }
        printf("SORTED ARRAY:\t");
        for(i=0;i<n;i++)
        printf("%d ",A[i]);
        printf("\nOrigianal Array\t");
        for(i=0;i<n;i++)
        printf("%d ",B[i]);
        printf("\nINDEX: ");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(A[i]==B[j])
                {
                    printf("%d ",j);
                }
            }
        }
    return 0;
}
int heron(int a,int b,int c)
{
        int p=(a+b+c)/2;
        return sqrt(p*(p-a)*(p-b)*(p-c));
}