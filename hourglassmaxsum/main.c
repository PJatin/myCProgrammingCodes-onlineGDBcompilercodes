#include<stdio.h>
int main(){
    int A[6][6],i,j,max=0,sum,k,r,c;
    
    for(i=0;i<6;i++)
    for(j=0;j<6;j++)
    scanf("%d",&A[i][j]);
    
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            sum=0;
            sum=sum+A[i][j]+A[i][j+1]+A[i][j+2]+A[i+1][j+1]+A[i+2][j]+A[i+2][j+1]+A[i+2][j+2];
            if(sum>max)
            max=sum;
        }
    }
    
    printf("%d",max);
}