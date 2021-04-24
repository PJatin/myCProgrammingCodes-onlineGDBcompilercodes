#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(){
    int i,j=0,n,max=0,maxdex=0,mindex=0;
    printf("FIND MAX DIFF. for MATRIX INPUT \n------------------------------\n");
    
    printf("Enter matrix size:\t");
    scanf("%d",&n);
    printf("Enter row elements:\t");
    int *a = (int *)malloc( sizeof(int) * n);
    for(i=0;i<n;i++)
    scanf("%d",a+i);
    
    for(i=0;i<n-1;i++){
        for(j=i;j<n;j++){
            if(((*(a+i))-(*(a+j)))>max){
                max=(*(a+i))-(*(a+j));
                maxdex=i;
                mindex=j;
            }
        }
    }
    printf("MAX Diff=A[%d]-A[%d]=%d-%d=%d\n",maxdex+1,mindex+1,*(a+maxdex),*(a+mindex),max);
}